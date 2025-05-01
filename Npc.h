#ifndef NPC_H
#define NPC_H

#include "Entity.h"

class Npc : public Entity {
public:
    Npc(Position position, char repr, int health);
    
    void LoseHealth(int amount);
    void MoveTowards(Board& board, Position destination);
};

#endif
