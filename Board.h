#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <memory>
#include "Position.h"
#include "Building.h"
#include "Entity.h"
#include "Player.h"

class Board {
private:
    int sizeX;
    int sizeY;
    std::vector<std::unique_ptr<Building>> buildings;
    std::vector<std::unique_ptr<Entity>> entities;
    std::unique_ptr<Building> townHall;
    std::unique_ptr<Player> player;
    
public:
    Board(int sizeX, int sizeY);
    
    bool IsOutOfBounds(Position pos) const;
    int CountBuildingType(const std::type_info& type) const;
    bool CollidesWith(const Building& building) const;
    void AddBuilding(std::unique_ptr<Building> building);
    
    const std::vector<Building*> GetBuildings() const;
    // Other necessary methods...
};

#endif
