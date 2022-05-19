#pragma once
#include "tovar.h"
#ifndef MILK_H
#define MILK_H

class milk : public Tovar
{
public:
    int cows, arenda, percent, workes;
    double percent_of_profit;
    int milk_cost_production(int arenda, int cows, int workes, double percent_of_profit, int amount);

    //peregruzka
    int overload(int workes_salary, int milk_quality);
private:
};

#endif
