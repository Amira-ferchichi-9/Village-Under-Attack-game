#ifndef POSITION_H
#define POSITION_H

class Position {
private:
    int x;
    int y;

public:
    Position(int x = 0, int y = 0);
    
    int GetX() const { return x; }
    int GetY() const { return y; }
    
    bool operator==(const Position& other) const;
    bool operator!=(const Position& other) const;
    Position operator+(const Position& other) const;
    
    int ManhattanDistance(const Position& other) const;
};

#endif
