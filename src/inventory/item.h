#ifndef ITEM_H
#define ITEM_H
#include <string>

using ItemID = int;

enum class ItemType
{
    WEAPON,
    ARMOR,
    CONSUMABLE,
    EQUIPMENT,
    MATERIAL,
    QUEST_ITEM,
    MISC
};

class Item
{
public:
    Item();
    virtual void UseItem();
    void SetName(std::string n);
    std::string GetName() const;
    void SetDesc(std::string d);
    std::string GetDesc() const;
    void SetWeight(float w);
    float GetWeight() const;
    void SetValue(float v);
    float GetValue() const;
    void SetType(ItemType t);
    ItemType GetType() const;
    void SetID(ItemID ID);
    ItemID GetID() const;

private:
    std::string name;
    std::string description;
    float weight = 0.0f;
    float value = 0.0f;
    ItemType type = ItemType::MISC;
    ItemID id = 0;
};

#endif // ITEM_H
