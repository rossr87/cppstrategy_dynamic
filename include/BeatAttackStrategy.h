#ifndef BEATATTACKSTRATEGY_H_INCLUDED
#define BEATATTACKSTRATEGY_H_INCLUDED

#include "AttackStrategy.h"

class BeatAttackStrategy : public AttackStrategy
{
public:
    void attack() override;
};

#endif // BEATATTACKSTRATEGY_H_INCLUDED
