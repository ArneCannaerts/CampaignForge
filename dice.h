#ifndef DICE_H
#define DICE_H

enum class DiceTypes
{
    D4 = 4,
    D6 = 6,
    D8 = 8,
    D10 = 10,
    D12 = 12,
    D20 = 20,
    D100 = 100
};

class Dice
{
public:
    static int rollDice(DiceTypes type);
    static int rollDice(int amount, DiceTypes type);
};

#endif // DICE_H