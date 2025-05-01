#ifndef BUILDING_H
#define BUILDING_H

#include "Entity.h"
#include "Resources.h"

class Building : public Entity {
protected:
    int sizeY;
    Resources cost;
    int maxInstances;
    
public:
    Building(Position position, char repr, int health, int sizeY, Resources cost, int maxInstances);
    
    virtual Resources Collect() = 0;
    int GetSizeY() const { return sizeY; }
    Resources GetCost() const { return cost; }
    int GetMaxInstances() const { return maxInstances; }
};

#endif
