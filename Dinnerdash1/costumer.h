#pragma once
#include <stack>

class Costumer {
private:
    std::stack<int> costumerQueue;
    float costumerMood;

public:
    void setCostumerQueue(std::stack<int> queue);
    void setCostumerMood(float mood);
};
