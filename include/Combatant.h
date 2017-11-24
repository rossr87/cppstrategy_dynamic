#ifndef COMBATANT_H_INCLUDED
#define COMBATANT_H_INCLUDED

#include <memory>

#include "AttackStyle.h"
#include "AttackStrategy.h"

class Combatant
{
public:
    int get_health() const {return this->health;}
    void set_health(const int health) {this->health = health;}
    void set_attack_strategy(const AttackStyle attack_style);
    void attack();
private:
    int health;
    std::unique_ptr<AttackStrategy> attack_strategy;
};

#endif // COMBATANT_H_INCLUDED
