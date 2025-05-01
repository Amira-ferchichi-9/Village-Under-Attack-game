#ifndef RESOURCES_H
#define RESOURCES_H

class Resources {
private:
    int gold;
    int elixir;

public:
    Resources(int gold = 0, int elixir = 0);
    
    void Add(const Resources& resources);
    void Spend(const Resources& cost);
    bool CanAfford(const Resources& cost) const;
    
    int GetGold() const { return gold; }
    int GetElixir() const { return elixir; }
};

#endif
