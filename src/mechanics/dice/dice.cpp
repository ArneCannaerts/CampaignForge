#include "mechanics/dice/dice.h"
#include <random>
#include <stdexcept>

namespace
{
std::mt19937 generator(std::random_device{}());
}

int Dice::rollDice(DiceTypes type)
{
    int sides = static_cast<int>(type);

    if (sides <= 0)
        throw std::invalid_argument("Invalid dice type.");

    std::uniform_int_distribution<int> distribution(1, sides);

    return distribution(generator);
}

int Dice::rollDice(int amount, DiceTypes type)
{
    if (amount <= 0)
        throw std::invalid_argument("Dice amount must be greater than zero.");

    int result = 0;

    for (int i = 0; i < amount; ++i)
        result += rollDice(type);

    return result;
}