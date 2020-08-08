#pragma once
class swimmingPool
{
	public:
		swimmingPool();
		swimmingPool(double l, double w, double d, double fill, double drain);

		//to calcualte time to fill/drain pool
		void timeToFill();
		void timeToEmpty();

	private:
		//in feet
		double length, width, depth;

		// in gallons per min
		double fillRate, drainRate, capacity;


};

