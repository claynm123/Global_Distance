#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <numbers>

// ! RETURNS KILOMETERS !
static double haversine(double lat1, double lon1,
	double lat2, double lon2)
{
	// distance between latitudes
	// and longitudes
	double dLat = (lat2 - lat1) *
		M_PI / 180.0;
	double dLon = (lon2 - lon1) *
		M_PI / 180.0;

	// convert to radians
	lat1 = (lat1)*M_PI / 180.0;
	lat2 = (lat2)*M_PI / 180.0;

	// apply trig formulas ! RETURNS KILOMETERS !
	double a = pow(sin(dLat / 2), 2) +
		pow(sin(dLon / 2), 2) *
		cos(lat1) * cos(lat2);
	double rad = 6371;
	double c = 2 * asin(sqrt(a));
	return rad * c;
};
