#include "Npc.h"
#include "Board.h"

Npc::Npc(Position position, char repr, int health) 
    : Entity(position, repr, health) {}

void Npc::LoseHealth(int amount) {
    health -= amount;
    if (health < 0) health = 0;
}

void Npc::MoveTowards(Board& board, Position destination) {
    int dx = 0, dy = 0;
    
    if (position.GetX() < destination.GetX()) dx = 1;
    else if (position.GetX() > destination.GetX()) dx = -1;
    
    if (position.GetY() < destination.GetY()) dy = 1;
    else if (position.GetY() > destination.GetY()) dy = -1;
    
    Move(board, dx, dy);
}
