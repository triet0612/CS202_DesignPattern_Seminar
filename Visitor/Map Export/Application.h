#pragma once
#include "MapExportVisitor.h"

class Application {
public:
    void run();
private:
    void init();
    void exportMap();
    vector<Entity*> entities;
};