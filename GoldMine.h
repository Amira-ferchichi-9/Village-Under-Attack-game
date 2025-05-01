#ifndef GOLDMINE_H
#define GOLDMINE_H

#include "Building.h"

class GoldMine : public Building {
private:
    static const int STACK_SIZE = 3;
    int currentStack;
    
public:
    GoldMine(Position position);
    Resources Collect() override;
    
    bool IsFull() const { return currentStack == STACK_SIZE; }
};

#endif
