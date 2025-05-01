#include "Radler.h"
#include "Board.h"
#include <algorithm>

Radler::Radler(Position position) 
    : Enemy(position, '@', 30, 1) {}

Building* Radler::GetNearestBuilding(std::vector<Building*> buildings) {
    if (buildings.empty()) return nullptr;
    
    auto nearest = std::min_element(buildings.begin(), buildings.end(),
        [this](Building* a, Building* b) {
            return position.ManhattanDistance(a->GetPosition()) < 
                   position.ManhattanDistance(b->GetPosition());
        });
    
    return *nearest;
}

void Radler::Update(Board& board) {
    auto buildings = board.GetBuildings();
    Building* nearest = GetNearestBuilding(buildings);
    
    if (!nearest) return;
    
    if (position == nearest->GetPosition()) {
        AttackBuilding(board);
    } else {
        MoveTowards(board, nearest->GetPosition());
    }
}

void Radler::AttackBuilding(Board& board) {
    // Implementation for attacking building
}
