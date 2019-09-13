//  main.cpp

#include <iostream>
#include <string>
#include <cassert>

#include "CreditCard.hpp"
#include "RewardCenter.hpp"
#include "RewardRates.h"


using namespace std;

int main()
{
    // sample test code
    
    CreditCard c;
    assert( std::to_string( c.totalSpend() ) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GAS)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::TRAVEL)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GROCERY)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::DINING)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::ALLELSE)) == "0.000000" );
    
    c.payFor(30, CreditCard::CATEGORY::GAS);
    c.payFor(10, CreditCard::CATEGORY::TRAVEL);
    c.payFor(20, CreditCard::CATEGORY::GROCERY);
    c.payFor(40, CreditCard::CATEGORY::DINING);
    c.payFor(5, CreditCard::CATEGORY::ALLELSE);
    assert( std::to_string( c.totalSpend() ) == "105.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GAS)) == "30.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::TRAVEL)) == "10.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GROCERY)) == "20.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::DINING)) == "40.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::ALLELSE)) == "5.000000" );
    
    c.clearSpending();
    assert( std::to_string( c.totalSpend() ) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GAS)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::TRAVEL)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GROCERY)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::DINING)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::ALLELSE)) == "0.000000" );
    
    RewardCenter r;
    RewardRates rates = { 1, 2, 3, 4, 11 };
    // 1% earned on gas purchases
    // 2% earned on dining purchases
    // 3% earned on travel purchases
    // 4% earned on grocery purchases
    // 11% earned on everything else
    
    assert( std::to_string( rates.GasRate ) == "1.000000" );
    assert( std::to_string( rates.DiningRate ) == "2.000000" );
    assert( std::to_string( rates.TravelRate ) == "3.000000" );
    assert( std::to_string( rates.GroceryRate ) == "4.000000" );
    assert( std::to_string( rates.AllElseRate ) == "11.000000" );
    
    c.payFor(800.00, CreditCard::CATEGORY::GAS);
    c.payFor(100.00, CreditCard::CATEGORY::DINING);
    c.payFor(100.00, CreditCard::CATEGORY::ALLELSE);
    // lacking a RewardRate structure, 1% is earned on every purchase
    assert( std::to_string( r.calculateCashBack( c ) ) == "10.000000" );
    assert( std::to_string( c.totalSpend() ) == "1000.000000" );
    
    // influence the cashback earned by the RewardRates structure above
    assert( std::to_string( r.calculateCashBack( c, rates ) ) == "21.000000" );
    assert( std::to_string( c.totalSpend() ) == "1000.000000" );
    // once cashback is earned, spending levels return to zero
    assert( std::to_string( r.earnCashBack( c, rates ) ) == "21.000000" );
    assert( std::to_string( c.totalSpend() ) == "0.000000" );
    
    cout << "all tests passed!" << endl;
    return 0;
    
    }
