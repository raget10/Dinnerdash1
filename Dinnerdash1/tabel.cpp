#include "tabel.h"

void Table::setTable(int id) {
    ID = id;
}

void Table::setJumlahKursi() {
    if (ID == 1 || ID == 3)
        jumlahKursi = 5;
    else
        jumlahKursi = 3;
}

void Table::setCheckStatus() {
    // Implementasi untuk memeriksa apakah jumlah pelanggan sesuai dengan jumlah kursi
    if (jumlahKursi == costumer.getCostumer().size())
        status = 1; // Meja siap untuk dilayani
    else
        status = 0; // Meja belum siap untuk dilayani
}

std::stack<int> Table::getCostumer() {
    return costumer.getCostumer();
}
