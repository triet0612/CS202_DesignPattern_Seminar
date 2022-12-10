#include <iostream>
#include "Company.h"
#include "Product.h"
#include "Food.h"
#include "Drink.h"
using namespace std;

int main()
{
    Company cp("ABC");
    vector<Product*> buyList = { new Food("aaa", 12), new Drink("aaa", 12) };
    vector<Product*> sellList = {new Food("aaa", 12), new Food("vasdc", 12)};
    for (auto i : buyList)
    {
        cp.buy(i);
    }
    cp.output();
    for (auto i : sellList)
    {
        cp.sell(i);
    }
    cp.output();
    return 0;
}
