#include <iostream>
#ifndef TV_H
#define TV_H
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;
class Tovar{

	private:
		int quality;
		int tovar_quality()
		{
		    quality = rand() % 3;
		    return quality;
		};

    public:
    	int cost, amount, workes_salary, milk_quality;
    	int overload(double percent, int milk_quality);    //schitaet balli ratinga
		int temp = tovar_quality();
		void inkapsulyaciya(int temp); 
};

#endif
