//
//  BalanceProperty.hpp
//  Arbitration
//
//  Created by Pavlo Boiko on 11.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#ifndef BalanceProperty_hpp
#define BalanceProperty_hpp

#include <stdio.h>

#include "ExchangeCenter.hpp"

class BalanceProperty {
private:
    double balance;
public:
    Currency *currency;
    ExchangeCenter *center;
    BalanceProperty(int _balance,Currency *_currency,ExchangeCenter *_center);
    bool incrementBalanceBySum(double sum);
    bool decrementBalanceBySum(double sum);
};

#endif /* BalanceProperty_hpp */
