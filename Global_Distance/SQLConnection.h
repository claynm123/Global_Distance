#pragma once
#include "sqlite3.h"
#include <string>
using namespace std;

sqlite3* OpenDatabase(const string sqlFileLoc = "RigGeoData.sql");