//
//  RewardCenter.cpp
//  Project 5
//
//  Created by Jessica Chen on 8/4/19.
//  Copyright © 2019 Jessica Chen. All rights reserved.
//

#include "RewardCenter.hpp"
#include "RewardRates.h"

#include <iostream>
#include <cstdlib>
using namespace std;

RewardCenter::RewardCenter()
{}

/////////////////////////////////////////////////////////////////////////////////////////////
double RewardCenter::calculateCashBack(const CreditCard& a)
{
    double calcCash1 = a.totalSpend() * 0.01;   //a.totalSpend() is the object calling the function to get the total amount spent
    return (calcCash1);
}


/////////////////////////////////////////////////////////////////////////////////////////////
double RewardCenter::calculateCashBack(const CreditCard& a, RewardRates b)
{

    double calcCash2 = a.totalSpend(CreditCard::GAS) * b.GasRate * 0.01 +
                       a.totalSpend(CreditCard::DINING) * b.DiningRate * 0.01 +
                       a.totalSpend(CreditCard::TRAVEL) * b.TravelRate * 0.01 +
                       a.totalSpend(CreditCard::GROCERY) * b.GroceryRate * 0.01 +
                       a.totalSpend(CreditCard::ALLELSE) * b.AllElseRate * 0.01;
    return (calcCash2);
}

/////////////////////////////////////////////////////////////////////////////////////////////
// earnCashBack is after cashback is earned and the totalSpend becomes 0

double RewardCenter::earnCashBack(CreditCard& a)
{
    double earnCash1 = a.totalSpend() * 0.01;
    a.clearSpending();
    
    return (earnCash1);
}

/////////////////////////////////////////////////////////////////////////////////////////////
double RewardCenter::earnCashBack(CreditCard& a, RewardRates b)
{
    double earnCash2 = a.totalSpend(CreditCard::GAS) * b.GasRate * 0.01 +
                       a.totalSpend(CreditCard::DINING) * b.DiningRate * 0.01 +
                       a.totalSpend(CreditCard::TRAVEL) * b.TravelRate * 0.01 +
                       a.totalSpend(CreditCard::GROCERY) * b.GroceryRate * 0.01 +
                       a.totalSpend(CreditCard::ALLELSE) * b.AllElseRate * 0.01;
    a.clearSpending();
    return (earnCash2);
}





