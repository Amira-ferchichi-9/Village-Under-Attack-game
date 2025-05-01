#include "GoldMine.h"

GoldMine::GoldMine(Position position) 
    : Building(position, 'K', 100, 3, Resources(0, 100), 3), currentStack(0) {}

Resources GoldMine::Collect() {
    if (currentStack > 0) {
        currentStack--;
        return Resources(10, 0);
    }
    return Resources(0, 0);
}
