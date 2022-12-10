#include "CoffeeShop.h"
#include "Visitor.h"
using namespace std;

void CoffeeShop::accept(Visitor *&v)
{
    v->visitCoffeeShop(*this);
}

void CoffeeShop::init()
{
    cout << "Enter the name of the coffee shop: ";
    cin.ignore(10, '\n');
    getline(cin, name);
    cout << "Enter the address of the coffee shop: ";
    cin.ignore(10, '\n');
    getline(cin, address);
    inputMenu();
}

void CoffeeShop::inputMenu()
{
    cout << "Enter the number of items in the menu: ";
    int numberOfItems;
    cin >> numberOfItems;
    for (int i = 0; i < numberOfItems; i++)
    {
        string itemName;
        int itemPrice;
        cout << "Enter the name of item " << i + 1 << ": ";
        cin.ignore(10, '\n');
        getline(cin, itemName);
        cout << "Enter the price of item " << i + 1 << ": ";
        cin >> itemPrice;
        menu.push_back(make_pair(itemName, itemPrice));
    }
}

bool CoffeeShop::isInMenu(string itemName)
{
    for (int i = 0; i < menu.size(); i++)
    {
        if (menu[i].first == itemName)
        {
            return true;
        }
    }
    return false;
}

void CoffeeShop::updateMenu()
{
    cout << "Enter the item you want to update in the menu: ";
    string itemName;
    cin.ignore();
    getline(cin, itemName);
    if (isInMenu(itemName))
    {
        cout << "You want to adjust this?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the new price of the item: ";
            double newPrice;
            cin >> newPrice;
            for (int i = 0; i < menu.size(); i++)
            {
                if (menu[i].first == itemName)
                {
                    menu[i].second = newPrice;
                    return;
                }
            }
        }
        return;
    }
    int itemPrice;
    cout << "Enter the price of the item: ";
    cin >> itemPrice;
    menu.push_back(make_pair(itemName, itemPrice));
    return;
}