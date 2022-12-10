#include "Application.h"
using namespace std;

void Application::run() {
    init();
    exportMap();
}

void Application::init() {
    int choice;
    do {
        cout << "1. Add a shopping mall" << endl;
        cout << "2. Add a coffee shop" << endl;
        cout << "3. Add a bank" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1: {
            Entity* sm = new ShoppingMall();
            sm->init();
            entities.push_back(sm);
            break;
        }
        case 2: {
            Entity* cs = new CoffeeShop();
            cs->init();
            entities.push_back(cs);
            break;
        }
        case 3: {
            Entity* b = new Bank();
            b->init();
            entities.push_back(b);
            break;
        }
        case 0: 
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
    while (choice != 0);
}

void Application::exportMap() {
    Visitor* v = new MapExportVisitor();
    for (Entity* e : entities) {
        e->accept(v);
    }
}