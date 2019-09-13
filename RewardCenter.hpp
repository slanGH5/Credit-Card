//
//  RewardCenter.hpp
//  Project 5
//
//  Created by Jessica Chen on 8/4/19.
//  Copyright © 2019 Jessica Chen. All rights reserved.
//

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
