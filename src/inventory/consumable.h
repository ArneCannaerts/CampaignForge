
#ifndef CONSUMABLE_H
#define CONSUMABLE_H

#include "item.h"
#include <string>

class Consumable : public Item
{
public:
    Consumable();

    // Effect
    std::string GetEffect() const;
    void SetEffect(const std::string& effect);

    // Duration
    int GetDuration() const;
    void SetDuration(int duration);

    // Uses
    int GetUses() const;
    void SetUses(int uses);

    // Consumption
    virtual void UseItem() override;
    bool IsConsumed() const;

private:
    std::string effect;
    int duration = 0;
    int uses = 1;
};

#endif // CONSUMABLE_H
