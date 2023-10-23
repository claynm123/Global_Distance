#include <iostream>
#include <string>
#include "Global_Distance.h"
#include <QtWidgets/QApplication>
#include "sqlite3.h"

using namespace std;
#include "SQLConnection.h"
#include "DistanceCalc.h"

char *errmsg;
string sqlQuery1;
string queryResult;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Global_Distance w;
    w.show();

	//Open the database
	sqlite3* sqlConn = OpenDatabase();

	//Set Queries
	sqlQuery1 = "SELECT * FROM riggeodata;" ;

	//Execute queries, uses lambda function
	int rc = sqlite3_exec(sqlConn, sqlQuery1.c_str(), [](void* data, int argc, char** argv, char** colName) -> int {
		

	}, & queryResult, & errmsg);

	if (rc != SQLITE_OK) {
		cout << "Error executing SQL queries" << endl;
	}

	//close SQL database connection
	sqlite3_close(sqlConn);

	//Executes on main window close
	return a.exec();
}
