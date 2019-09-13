//  RewardCenter.hpp

#ifndef REWARDCENTER_HPP
#define REWARDCENTER_HPP

#include "CreditCard.hpp"
#include "RewardRates.h"

class RewardCenter
{
public:
    RewardCenter();
    double calculateCashBack(const CreditCard&);
    double calculateCashBack(const CreditCard&, RewardRates);
    double earnCashBack(CreditCard&);
    double earnCashBack(CreditCard&, RewardRates);
};


#endif /* REWARDCENTER_HPP */
