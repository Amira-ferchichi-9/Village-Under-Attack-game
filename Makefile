CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRCS = main.cpp Position.cpp Resources.cpp Entity.cpp Npc.cpp Building.cpp GoldMine.cpp Player.cpp Enemy.cpp Radler.cpp Board.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = village_game

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)
