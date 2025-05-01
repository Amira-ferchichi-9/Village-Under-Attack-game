#include <iostream>
#include <memory>
#include "Board.h"
#include "Player.h"
#include "GoldMine.h"
#include "Radler.h"

int main() {
    // Initialize game board
    Board board(20, 20);
    
    // Create player
    auto player = std::make_unique<Player>(Position(10, 10));
    board.AddPlayer(std::move(player));
    
    // Create some buildings
    board.AddBuilding(std::make_unique<GoldMine>(Position(5, 5)));
    
    // Create some enemies
    board.AddEntity(std::make_unique<Radler>(Position(15, 15)));
    
    // Game loop
    while (true) {
        // Clear screen (Linux terminal)
        std::cout << "\033[2J\033[1;1H";
        
        // Render board
        // Update entities
        // Handle input
        
        // Simple delay
        for (int i = 0; i < 10000000; i++);
    }
    
    return 0;
}
