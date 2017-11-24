#ifndef BITEATTACKSTRATEGY_H_INCLUDED
#define BITEATTACKSTRATEGY_H_INCLUDED

#include <iostream>

#include "AttackStrategy.h"

class BiteAttackStrategy : public AttackStrategy
{
public:
    void attack() override;
};

#endif // BITEATTACKSTRATEGY_H_INCLUDED
