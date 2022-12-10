#include "ShoppingMall.h"
#include "Visitor.h"
using namespace std;

void ShoppingMall::accept(Visitor* &v) {
    v->visitShoppingMall(*this);
}

void ShoppingMall::init() {
    cin.ignore(1000, '\n');
    cout << "Enter the name of the shopping mall: ";
    getline(cin, this->name);
    cout << "Enter the address of the shopping mall: ";
    getline(cin, this->address);
    cout << "Enter the number of brands in the shopping mall: ";
    cin >> this->numberOfBrands;
    for (int i = 0; i < this->numberOfBrands; i++) {
        string brand;
        cin.ignore(10, '\n');
        cout << "Enter the name of brand " << i + 1 << ": ";
        getline(cin, brand);
        this->brandsList.push_back(brand);
    }
}

bool ShoppingMall::isBrandInList(string brand) {
    for (int i = 0; i < this->numberOfBrands; i++) {
        if (this->brandsList[i] == brand) {
            return true;
        }
    }
    return false;
}

void ShoppingMall::updateBrandsList() {
    cout << "Enter the brand you want to update in the shopping mall: ";
    string brand;
    cin.ignore();
    getline(cin, brand);
    if (this->isBrandInList(brand)) {
        cout << "The brand is already in the list." << endl;
        return;
    }
    this->brandsList.push_back(brand);
    ++this->numberOfBrands;
    return;
}