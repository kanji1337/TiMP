#include <iostream>
#include <cstdint> 
#include <string> 
#include "milk_product.h"
#include "tovar.h"
using namespace std;

int overload(double percent, int cost);
int overload(int workes_salary, int milk_quality);

int tovar_quality();
void inkapsulyaciya(int tovar_quality);

//Liskov LSP
class Product
{
public:
    string name;
	double callories;
    int proteins = 0;
	void add_food_on_site(string name, double callories){
        if (name == "egg" || name == "banana") {proteins = 8; }
        cout << "On your site added product: " << name
        <<"\nwith callories: "<< callories<< " and proteins: " << proteins << endl;
    };
};

class Toil : public Tovar
{
    public:
    string name;
    int rec_ages;
    string order_online(int cost, string name)
    {
        int total;
        cout << "how are you want "<< name <<  "?" <<endl;
        cin >> amount;
        total = cost*amount ;
        cout << "Your odrer summary: ";
        cout << total << endl;
        return name;
    };
};


int main()
{
    //variant 9

    //milk product in other files
    milk *domik_v_derevne = new milk;
    double percent;
    int workes_salary, milk_quality, cost;

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
    cost = domik_v_derevne->milk_cost_production(domik_v_derevne->arenda, domik_v_derevne->cows, domik_v_derevne->workes, 
    domik_v_derevne->percent_of_profit);
	
	//peregruzka
    overload(percent, cost);                      //vizov dochernego classa
    overload(workes_salary, milk_quality);        //vizov roditelskogo classa 


    inkapsulyaciya(tovar_quality());
   
    
    //product
    string tit;
    Product *title = new Product;
    cout << "\n\n\tPlease add food to site, fill information"<<endl;
    cout << "\nWhat is it?:\n";
    cin >> tit;
    title->name = tit;
    cout << "how many callories " << tit << "have: ";
    cin >> title->callories; 
    title->add_food_on_site(title->name, title->callories);

    //interface segregation (ISP) and  (SRP)
    class ride : public Toil
    {
        public:
            void move(string name)
            {
                if (name == "car") {cout << "our toil can ride" << endl;}
            };
    };

    class swim : public Toil
    {
        public:
            void Swim(string name)
            {
                if (name == "ship" || name == "boat") {cout << "our toil can swim" << endl;}
            };
    };

        //toil
    string toil_name;
    Toil *tl = new Toil;
    cout << "\nEnter what you want toil: ";
    cin >> toil_name;
    tl->cost = 100;
    tl->order_online(tl->cost, toil_name);

    //(ISP)
    ride Ride;
    Ride.move(toil_name);
    swim swwim;
    swwim.Swim(toil_name);

    return 0;
}
