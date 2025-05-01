#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Resources.h"

class Board;
class Building;

class Player : public Entity {
private:
    Resources resources;
    
public:
    Player(Position position);
    
    Building* Interact(Board& board);
    Resources GetResources() const { return resources; }
    void AddResources(const Resources& res) { resources.Add(res); }
};

#endif
