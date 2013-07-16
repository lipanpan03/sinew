package com.hadapt.catalog;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Properties;

public final class CatalogService {
    static final String UPDATE_DOCUMENT_SCHEMA_STATEMENT_TEMPLATE =
        "UPDATE information_schema.documents SET count = count + ? WHERE key_name = '?'" +
        "AND table_name = '?'";
    static final String INSERT_DOCUMENT_SCHEMA_STATEMENT_TEMPLATE =
        "INSERT INTO information_schema.documents VALUES('?', '?', '?', '?', '?', '?', '?')";
    static final String GET_DOCUMENT_KEYS_STATEMENT_TEMPLATE =
        "SELECT key_name FROM information_schema.documents WHERE table_name = '?'";
    static final String GET_SCHEMA_STATEMENT_TEMPLATE =
        "SELECT column_name, column_type FROM information_schema.columns WHERE table_name = '?'";

    static CatalogService catalogInstance = null;

    Connection _conn = null;

    // FIXME: if !_conn, print error msg and return;

    public static CatalogService getCatalog() {
        if (catalogInstance == null) {
            catalogInstance = new CatalogService();
        }
        return catalogInstance;
    }

    private CatalogService() {
    }

    public void configure(String url, Properties props) throws SQLException {
        if (_conn != null) {
            _conn.close();
        }
        _conn = DriverManager.getConnection(url, props);
    }

    public void close() {
        try {
            _conn.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void updateDocumentSchema(HashMap<String, Object> recordData) {
        try {
            PreparedStatement stmt = _conn.prepareStatement(UPDATE_DOCUMENT_SCHEMA_STATEMENT_TEMPLATE);
            stmt.setInt(1, (Integer) recordData.get("count"));
            stmt.setString(2, (String)recordData.get("key_name"));
            stmt.setString(3, (String)recordData.get("table_name"));
            if (!stmt.execute()) {
                if (stmt.getUpdateCount() == 0) {
                    stmt = _conn.prepareStatement(INSERT_DOCUMENT_SCHEMA_STATEMENT_TEMPLATE);
                    stmt.setString(1, (String)recordData.get("key_name"));
                    stmt.setString(2, (String)recordData.get("table_name"));
                    stmt.setString(3, (String) recordData.get("column_name"));
                    stmt.setString(4, (String)recordData.get("type"));
                    stmt.setBoolean(5, (Boolean) recordData.get("materialized"));
                    stmt.setBoolean(6, (Boolean)recordData.get("dirty"));
                    stmt.setInt(7, (Integer) recordData.get("count"));
                    stmt.execute();
                } else if (stmt.getUpdateCount() != 1) {
                    System.err.println("ERROR: Updated more than 1 entry");
                }
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

//     public ArrayList<String> getDocumentKeysForTable(String tableName) { // TODO: return a lisst of name, type pairs
//         ArrayList<String> docKeys = new ArrayList<String>();
//         return docKeys;
//     }

    public ArrayList<Attribute> getRelationSchema(String relname) {
        return _getSchemaInternal(relname, GET_SCHEMA_STATEMENT_TEMPLATE);
    }

    public ArrayList<Attribute> getDocumentSchema(String relname) {
        return _getSchemaInternal(relname, GET_DOCUMENT_KEYS_STATEMENT_TEMPLATE);
    }

    private ArrayList<Attribute> _getSchemaInternal(String relname, String stmtTemplate) {
        ArrayList<Attribute> schema = new ArrayList<Attribute>();
        try {
            PreparedStatement stmt = _conn.prepareStatement(stmtTemplate);
            stmt.setString(1, relname);
            ResultSet rs = stmt.executeQuery();
            while (rs.next()) {
                String name = rs.getString("key_name");
                String type = rs.getString("column_type");
                schema.add(new Attribute(name, type));
            }
            return schema;
        } catch (SQLException e) {
            e.printStackTrace();
            return new ArrayList<Attribute>();
        }

    }

    public void getExceptions(String relname, String keyname) {

    }
}
