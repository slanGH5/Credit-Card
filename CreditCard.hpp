//
//  CreditCard.hpp
//  Project 5
//
//  Created by Jessica Chen on 7/31/19.
//  Copyright © 2019 Jessica Chen. All rights reserved.
//

#ifndef CREDITCARD_HPP
#define CREDITCARD_HPP

class CreditCard
{
private:                                                    //private class members cannot be accessible outside of the class
    double gasSpending;
    double diningSpending;
    double travelSpending;
    double grocerySpending;
    double allElseSpending;
    
public:
    enum CATEGORY {GAS, DINING, TRAVEL, GROCERY, ALLELSE};   //put the enumeration in the public class so it is accessible
    
    CreditCard();
    
    void payFor(double, CATEGORY); 
    double totalSpend() const;
    double totalSpend(CATEGORY) const;
    void clearSpending();
};


#endif /* CREDITCARD_HPP */
