
#include "inventory.h"
#include <utility>

Inventory::Inventory() = default;

float Inventory::CalcWeight() const
{
    float totalWeight = 0.0f;

    for (const auto& item : items)
    {
        totalWeight += item.second->GetWeight();
    }

    return totalWeight;
}

float Inventory::GetMaxWeight() const
{
    return maxWeight;
}

void Inventory::SetMaxWeight(float w)
{
    maxWeight = w;
}

bool Inventory::IsOverWeight() const
{
    return CalcWeight() > maxWeight;
}

bool Inventory::AddItem(std::unique_ptr<Item> item)
{
    if (!item)
        return false;

    ItemID id = item->GetID();

    auto result = items.emplace(id, std::move(item));

    return result.second;
}

void Inventory::RemoveItem(ItemID id)
{
    items.erase(id);
}

Item* Inventory::GetItem(ItemID id) const
{
    auto it = items.find(id);

    if (it == items.end())
        return nullptr;

    return it->second.get();
}
