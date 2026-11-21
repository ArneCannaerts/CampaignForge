
#ifndef INVENTORY_H
#define INVENTORY_H

#include "item.h"
#include <unordered_map>
#include <memory>

class Inventory
{
public:
    Inventory();

    float CalcWeight() const;
    float GetMaxWeight() const;
    void SetMaxWeight(float w);
    bool IsOverWeight() const;

    bool AddItem(std::unique_ptr<Item> item);
    void RemoveItem(ItemID id);
    Item* GetItem(ItemID id) const;

private:
    std::unordered_map<ItemID, std::unique_ptr<Item>> items;
    float maxWeight = 0.0f;
};

#endif // INVENTORY_H
