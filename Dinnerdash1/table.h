#pragma once
#include "Costumer.h"
#include <stack>

class Table {
private:
    int ID;
    int jumlahKursi;
    int status;
    Costumer costumer;

public:
    void setTable(int id);
    void setJumlahKursi();
    void setCheckStatus();
    std::stack<int> getCostumer();
};
