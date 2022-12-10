#include "MapExportVisitor.h"
using namespace std;

void MapExportVisitor::visitShoppingMall(ShoppingMall sm) {
    ofstream ofs;
    ofs.open("Information.txt", ios::app);
    ofs << "Shopping Mall: " << sm.getName() << endl;
    ofs << "Address: " << sm.getAddress() << endl;
    ofs << "Brands: " << endl;
    vector<string> brands = sm.getBrands();
    for (int i = 0; i < brands.size(); i++) {
        ofs << i + 1 << "." << brands[i] << endl;
    }
    ofs << endl;
    ofs.close();
}

void MapExportVisitor::visitCoffeeShop(CoffeeShop cs) {
    ofstream ofs;
    ofs.open("Information.txt", ios::app);
    ofs << "Coffee Shop: " << cs.getName() << endl;
    ofs << "Address: " << cs.getAddress() << endl;
    ofs << "Menu: " << endl;
    vector<pair<string, double>> menu = cs.getMenu();
    for (int i = 0; i < menu.size(); i++) {
        ofs << i + 1 << "." << menu[i].first << " " << menu[i].second << endl;
    }
    ofs << endl;
    ofs.close();
}

void MapExportVisitor::visitBank(Bank b) {
    ofstream ofs;
    ofs.open("Information.txt", ios::app);
    ofs << "Bank: " << b.getCompanyName() << endl;
    ofs << "Address: " << b.getAddress() << endl;
    ofs << "Services: " << endl;
    vector<string> services = b.getServices();
    for (int i = 0; i < services.size(); i++) {
        ofs << i + 1 << "." << services[i] << endl;
    }
    ofs << endl;
    ofs.close();
}
