#include <iostream>
#include <string>
#include "Global_Distance.h"
#include <QtWidgets/QApplication>
#include "sqlite3.h"

using namespace std;
#include "SQLConnection.h"
#include "DistanceCalc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Global_Distance w;
    w.show();
    return a.exec();

	sqlite3_close(geoDataTable);
}
