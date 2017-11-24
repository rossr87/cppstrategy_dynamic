#include <iostream>

#include "Combatant.h"
#include "AttackStyle.h"

using namespace std;

int main()
{
    Combatant baboon;
    baboon.set_attack_strategy(AttackStyle::beat);
    baboon.attack();

    baboon.set_attack_strategy(AttackStyle::bite);
    baboon.attack();

    baboon.set_attack_strategy(AttackStyle::claw);
    baboon.attack();

    return 0;
}
