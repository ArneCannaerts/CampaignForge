
#include "consumable.h"

Consumable::Consumable() = default;

// Effect
std::string Consumable::GetEffect() const
{
    return effect;
}

void Consumable::SetEffect(const std::string& e)
{
    effect = e;
}

// Duration
int Consumable::GetDuration() const
{
    return duration;
}

void Consumable::SetDuration(int d)
{
    duration = d;
}

// Uses
int Consumable::GetUses() const
{
    return uses;
}

void Consumable::SetUses(int u)
{
    uses = u;
}

// Consumption
void Consumable::UseItem()
{
    if (uses > 0)
        --uses;
}

bool Consumable::IsConsumed() const
{
    return uses <= 0;
}
