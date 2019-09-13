# Credit-Card

Creating a class `CreditCard`, with the following member functions:

```
private:
    double gasSpending;
    double diningSpending;
    double travelSpending;
    double grocerySpending;
    double allElseSpending;
    
 public:
    enum CATEGORY {GAS, DINING, TRAVEL, GROCERY, ALLELSE};
    CreditCard();
    void payFor(double, CATEGORY); 
    double totalSpend() const;
    double totalSpend(CATEGORY) const;
    void clearSpending();
```
