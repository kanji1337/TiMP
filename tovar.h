#include <iostream>
#ifndef TV_H
#define TV_H
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;
class Tovar{

	private:
		int tovar_quality();

    public:
    	int cost, amount, workes_salary, milk_quality;
    	void inkapsulyaciya(int quality); 
};
//SRP
class overload_rod
{
	public:
	int overload(double percent, int milk_quality); 
};

#endif
