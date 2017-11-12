//
//  ExchangeOperation.hpp
//  Arbitration
//
//  Created by Pavlo Boiko on 11.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#ifndef ExchangeOperation_hpp
#define ExchangeOperation_hpp

#include <stdio.h>
#include "BalanceProperty.hpp"

class ExchangeOperation {
private:
    BalanceProperty *fromBalance;
    BalanceProperty *toBalance;
    
public:
    ExchangeOperation(BalanceProperty *_fromBalance,BalanceProperty *_toBalance);
    bool canMakeExchange(double withSum);
    bool makeExchange(double sum);
};

#endif /* ExchangeOperation_hpp */
