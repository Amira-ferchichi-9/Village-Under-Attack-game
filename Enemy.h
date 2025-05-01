#ifndef ENEMY_H
#define ENEMY_H

#include "Npc.h"

class Enemy : public Npc {
protected:
    bool targeted;
    int attackDamage;
    
public:
    Enemy(Position position, char repr, int health, int attackDamage);
    
    bool IsTargeted() const { return targeted; }
    void SetTargeted(bool value) { targeted = value; }
    int GetAttackDamage() const { return attackDamage; }
    
    virtual void AttackBuilding(Board& board) = 0;
};

#endif
