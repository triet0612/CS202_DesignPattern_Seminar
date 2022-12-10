#include <iostream>
#include "Food.h"
#include "Drink.h"
#include "Product.h"
#include <vector>
using namespace std;

class Company
{
private:
    string name;
    vector<Product*> listOfProducts;
    int FoodRemaining;
    int DrinkRemaining;
public:
    Company(): name(""), listOfProducts({}), FoodRemaining(0), DrinkRemaining(0) {};
    Company(string name): Company()
    {
        this->name = name;
    }
    ~Company() {
        for (auto &i : this->listOfProducts)
        {
            delete i;
        }
        this->listOfProducts.clear();
    }

    void buy(Product* p)
    {
        listOfProducts.push_back(p);
        p->delivered();
        if (p->getType() == "food")
            FoodRemaining++;
        else if (p->getType() == "drink")
            DrinkRemaining++;
    }
    void sell(Product* p)
    {
        for (int i = 0; i < this->listOfProducts.size(); i++)
        {
            if (this->listOfProducts[i]->getName() == p->getName())
            {
                listOfProducts.erase(this->listOfProducts.begin() + i);
                if (p->getType() == "food")
                    FoodRemaining--;
                else if (p->getType() == "drink")
                    DrinkRemaining--;
                break;
            }
        }
    }
    void output()
    {
        cout << this->name << endl;
        for (auto i : this->listOfProducts)
        {
            i->output();
        }
        cout << FoodRemaining << endl;
        cout << DrinkRemaining << endl;
    }
};
