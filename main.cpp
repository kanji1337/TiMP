#include <iostream>
#include <cstdint> 
#include <string> 
#include "milk_product.h"
#include "tovar.h"
using namespace std;

int overload(double percent, int cost);
int overload(int workes_salary, int milk_quality);
void inkapsulyaciya(int temp);


class Product : public Tovar
{
public:
    string name;
	double callories;
	double protein;
	double carbonhydrates;
	double fats;
	bool freshness;
	void add_food_on_site(int cost, int amount, string name, double callories){
        cout << "On your site added prudct" << name << "\nwith cost: "<< cost << "\tamount:"
        << amount << "\tcallories" << callories<<endl;
    };
};

class Toil : public Tovar
{
    public:
    string name;
    int rec_ages;
    int order_online(int cost, string name)
    {
        int total;
        cout << "how are you want "<< name <<  "?" <<endl;
        cin >> amount;
        total = cost*amount ;
        cout << "Your odrer summary: ";
        cout << total << endl;
        return total;
    };
};


int main()
{
    //variant 9

    //milk product in other files
    milk *domik_v_derevne = new milk;
    double percent;
    int workes_salary, milk_quality;
    cout << "enter arenda cost for milk firm: ";
    cin >> domik_v_derevne->arenda;
    cout << "enter cows cost: ";
    cin >> domik_v_derevne->cows;
    milk_quality = domik_v_derevne->cows;
    cout << "enter workes salary: ";
    cin >> domik_v_derevne->workes;
    workes_salary = domik_v_derevne->workes;
    cout << "enter what you want earn in procent (0.1-1): ";
    cin >> domik_v_derevne->percent_of_profit;
    percent = domik_v_derevne->percent_of_profit;
    cout << "enter how many milks you want sell: ";
    cin >> domik_v_derevne->amount;

    int cost;
    cost = domik_v_derevne->milk_cost_production(domik_v_derevne->arenda, domik_v_derevne->cows, domik_v_derevne->workes, 
    domik_v_derevne->percent_of_profit, domik_v_derevne->amount);
	
	//peregruzka
    overload(percent, cost);                      //vizov dochernego classa
    overload(workes_salary, milk_quality);        //vizov roditelskogo classa 
    inkapsulyaciya(1);
   
    
    //product
    string tit;
    int costt;
    Product *title = new Product;
    cout << "\n\n\tPlease add food to site, fill information"<<endl;
    cout << "\nWhat is it?";
    cin >> tit;
    title->name = tit;
    cout << "how many "<< tit<<":" << endl;
    cin >> title->amount;
    cout << "how many callories " << tit << "have: ";
    cin >> title->callories; 
    title->add_food_on_site(title->cost, title->amount, title->name, title->callories);

    //toil
    string tmp;
    Toil *tl = new Toil;
    cout << "\nEnter what you want toil: ";
    cin >> tmp;
    tl->cost = 100;
    tl->order_online(tl->cost, tmp);
    return 0;
}
