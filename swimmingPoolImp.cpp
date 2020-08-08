#include "swimmingPool.h"
#include <iostream>

using namespace std;

swimmingPool::swimmingPool(double l, double w, double d, double fill, double drain) {
	length = l;
	width = w;
	depth = d;
	fillRate = fill;
	drainRate = drain;

	//will calcuate in gallons
	capacity = (length * width * depth * 7.5);
}

void swimmingPool::timeToFill() {
	double part, tempCapacity;
	cout << "Enter the percentage of the pool that needs to be filled: (0% - 100%)" << endl;
	cin >> part;

	tempCapacity = (length * width * (depth * (part / 100)) * 7.5);
	cout << part << "% of pool will be filled in " << int(tempCapacity / fillRate) << " minutes." << endl;
}