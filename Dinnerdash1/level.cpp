#include "Level.h"

void Level::setGoalLevel() {
    // Implementasi untuk menetapkan goalLevel ketika pemain berhasil melayani satu meja dengan satu kelompok pelanggan
}

void Level::setTableLevel() {
    // Implementasi untuk menetapkan TableLevel
}

void Level::setKitchenLevel() {
    // Implementasi untuk menetapkan KitchenLevel
}

void Level::setTrashbinLevel() {
    // Implementasi untuk menetapkan TrashbinLevel
}
void Level ::getCostumerQueue(){
    //Implementasi untuk menetapkan getcostumerLevel
}

std::stack<int> Level::getCostumerQueue() {
    return costumerQueue.getCostumer();
}

void Level::setMoney(float amount) {
    money = amount;
}

void Level::setDish() {
    // Implementasi untuk menetapkan Dish
}
