#include "Position.h"

Position::Position(int x, int y) : x(x), y(y) {}

bool Position::operator==(const Position& other) const {
    return x == other.x && y == other.y;
}

bool Position::operator!=(const Position& other) const {
    return !(*this == other);
}

Position Position::operator+(const Position& other) const {
    return Position(x + other.x, y + other.y);
}

int Position::ManhattanDistance(const Position& other) const {
    return abs(x - other.x) + abs(y - other.y);
}
