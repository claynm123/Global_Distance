#include "sqlite3.h"
#include <string>
#include <iostream>
using namespace std;

//Takes an optional string arg specifying sql file location. Defaults to "RigGeoData.sql"
sqlite3* OpenDatabase(const string sqlFileLoc = "RigGeoData.sql") {

	sqlite3* geoDataTable;
	int sqlConnCode = sqlite3_open(sqlFileLoc.c_str(), &geoDataTable);

	if (sqlConnCode) {
		cout << "Error: Unable to open database: " << sqlFileLoc << endl;
		return NULL;
	}
	else {
		return geoDataTable;
	}
}



/*
//holding

const char* createTableSQL = "CREATE TABLE IF NOT EXISTS MyTable (ID INTEGER PRIMARY KEY, Name TEXT);";
rc = sqlite3_exec(db, createTableSQL, 0, 0, 0);

if (rc != SQLITE_OK) {
	// Handle the error
}
else {
	// Table created or already exists
}

sqlite3_close(db);
*/