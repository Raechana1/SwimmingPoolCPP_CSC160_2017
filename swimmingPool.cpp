/*Raechana Hong
09/01/2017
Chapter 10 Programming Assignment*/
#include "swimmingPool.h"
#include <iostream>

using namespace std;

int main() {
	double l, w, d, fillRate, drainRate;
	int getDimensions(double l, double w, double d, double fillRate, double drainRate);
	swimmingPool pool(l, w, d, fillRate, drainRate);
	pool.timeToFill();
	pool.timeToEmpty();

	system("pause");
	return 0;
}

int getDimensions(double l, double w, double d, double fillRate, double drainRate) {
	cout << "Enter length: ";
	cin >> l;
	cout << "\nEnter width: ";
	cin >> w;
	cout << "\nEnter depth: ";
	cin >> d;
	cout << "\nEnter rate to fill pool in gallons per min: ";
	cin >> fillRate;
	cout << "\nEnter rate to empty pool in gallons per min: ";
	cin >> drainRate;
	cout << endl;
	return l, w, d, fillRate, drainRate;
}