#pragma once
#include "Table.h"
#include "Dish.h"
#include "CostumerQueue.h"

class Level {
private:
    int goal;
    Table table;
    Dish dish;
    CostumerQueue costumerQueue;
    float money;

public:
    void setGoalLevel();
    void setTableLevel();
    void setKitchenLevel();
    void setTrashbinLevel();
    std::stack<int> getCostumerQueue();
    void setMoney(float amount);
    void setDish();
};
