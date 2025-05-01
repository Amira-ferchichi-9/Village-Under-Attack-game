#ifndef ENTITY_H
#define ENTITY_H

#include "Position.h"

class Board; // Forward declaration

class Entity {
protected:
    Position position;
    char repr;
    int health;

public:
    Entity(Position position, char repr, int health);
    virtual ~Entity() = default;
    
    Position GetPosition() const { return position; }
    char GetRepr() const { return repr; }
    int GetHealth() const { return health; }
    
    void Move(Board& board, int dx, int dy);
    virtual void Update(Board& board) = 0;
};

#endif
