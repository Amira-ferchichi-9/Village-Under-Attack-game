#ifndef RADLER_H
#define RADLER_H

#include "Enemy.h"
#include "Building.h"

class Radler : public Enemy {
public:
    Radler(Position position);
    void Update(Board& board) override;
    void AttackBuilding(Board& board) override;
    
private:
    Building* GetNearestBuilding(std::vector<Building*> buildings);
};

#endif
