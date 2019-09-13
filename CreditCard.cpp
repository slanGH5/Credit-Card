//  CreditCard.cpp

#include "CreditCard.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

CreditCard::CreditCard()
{
    gasSpending = 0.000000;        //declaration not needed because c++ will find this variable in the class itself
    diningSpending = 0.000000;
    travelSpending = 0.000000;
    grocerySpending = 0.000000;
    allElseSpending = 0.000000;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
void CreditCard::payFor(double x, CATEGORY cat)
{
    if(cat == GAS)               //for each category, add up the amounts
    {
        gasSpending += x;
    }
    if(cat == DINING)
    {
        diningSpending += x;
    }
    if(cat == TRAVEL)
    {
        travelSpending += x;
    }
    if(cat == GROCERY)
    {
        grocerySpending += x;
    }
    if (cat == ALLELSE)
    {
        allElseSpending += x;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////
double CreditCard::totalSpend() const
{
    double totalSpent;
    totalSpent = gasSpending + diningSpending + travelSpending + grocerySpending + allElseSpending;
    return (totalSpent);        //add up the entire spending
}

/////////////////////////////////////////////////////////////////////////////////////////////////
double CreditCard::totalSpend(CATEGORY cat) const
{
    if(cat == GAS)             //for each category, return the total spending
    {
        return gasSpending;
    }
    else if(cat == DINING)
    {
        return diningSpending;
    }
    else if(cat == TRAVEL)
    {
        return travelSpending;
    }
    else if(cat == GROCERY)
    {
        return grocerySpending;
    }
    else
    {
        return allElseSpending;
    }
    
}

/////////////////////////////////////////////////////////////////////////////////////////////////
void CreditCard::clearSpending()
{
    gasSpending = 0.000000;         //clear values by setting equal to 0 again
    diningSpending = 0.000000;
    travelSpending = 0.000000;
    grocerySpending = 0.000000;
    allElseSpending = 0.000000;
}


    
