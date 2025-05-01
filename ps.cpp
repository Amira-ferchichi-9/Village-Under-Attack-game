#include "Resources.h"
#include <stdexcept>

Resources::Resources(int gold, int elixir) : gold(gold), elixir(elixir) {}

void Resources::Add(const Resources& resources) {
    gold += resources.gold;
    elixir += resources.elixir;
}

void Resources::Spend(const Resources& cost) {
    if (!CanAfford(cost)) {
        throw std::runtime_error("Not enough resources");
    }
    gold -= cost.gold;
    elixir -= cost.elixir;
}

bool Resources::CanAfford(const Resources& cost) const {
    return gold >= cost.gold && elixir >= cost.elixir;
}
