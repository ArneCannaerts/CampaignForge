#include "item.h"

Item::Item() = default;

void Item::UseItem() const
{
}

void Item::SetName(std::string n)
{
    name = n;
}

std::string Item::GetName() const
{
    return name;
}

void Item::SetDesc(std::string d)
{
    description = d;
}

std::string Item::GetDesc() const
{
    return description;
}

void Item::SetWeight(float w)
{
    weight = w;
}

float Item::GetWeight() const
{
    return weight;
}

void Item::SetValue(float v)
{
    value = v;
}

float Item::GetValue() const
{
    return value;
}

void Item::SetType(ItemType t)
{
    type = t;
}

ItemType Item::GetType() const
{
    return type;
}
