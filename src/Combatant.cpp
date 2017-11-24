#include <memory>

#include "Combatant.h"
#include "BeatAttackStrategy.h"
#include "BiteAttackStrategy.h"
#include "ClawAttackStrategy.h"

void Combatant::set_attack_strategy(const AttackStyle attack_style)
{
    switch (attack_style)
    {
    case AttackStyle::beat:
        attack_strategy = std::make_unique<BeatAttackStrategy>();
        break;
    case AttackStyle::bite:
        attack_strategy = std::make_unique<BiteAttackStrategy>();
        break;
    case AttackStyle::claw:
        attack_strategy = std::make_unique<ClawAttackStrategy>();
        break;
    }
}

void Combatant::attack()
{
    attack_strategy->attack();
}
