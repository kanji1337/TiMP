#include <iostream>
#include <string>
#include "tovar.h"

using namespace std;

int overload(double percent, int milk_quality)
{
	int rating_of_milk_firm;
	rating_of_milk_firm = percent * milk_quality;
	cout << "Overload roditelskogo class \t rating of firm contain: " << rating_of_milk_firm << endl;
	return rating_of_milk_firm;
}

void inkapsulyaciya(int quality)
{
	string end_quality;
	string quality_n[3] = {"bad", "good", "perfect"};
	end_quality = quality_n[quality];		
	cout << "Quality of your tovar is : " << end_quality << endl;
};