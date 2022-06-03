#include "milk_product.h"
#include <iostream>
#include <math.h>

using namespace std;

int milk::milk_cost_production(int arenda, int cows, int workes, double percent_of_profit)
{
	int expenses = arenda + cows + workes;
	int cost = expenses * (1+percent_of_profit);
	std::cout << "Our milk will be cost: "<< cost << "\n";
	return cost;
}

int overload(int workes_salary, int milk_quality)
{
	int rating_of_milk_quality;
	rating_of_milk_quality = workes_salary * 0.000001 * milk_quality;
	cout << "Overload dochernego class \t rating of milk quality contain: " << rating_of_milk_quality << endl;
	return rating_of_milk_quality;
}

//open-closed principe
int milk_modern::milk_cost_production(int arenda, int cows, int workes, double percent_of_profit)
{
	int expenses = arenda + cows - workes;
	int cost = expenses * (1-percent_of_profit);
	std::cout << "Our milk will be cost: "<< cost << "\n";
	return cost;
}