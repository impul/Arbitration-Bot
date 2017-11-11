//
//  CurrencyTrades.hpp
//  Arbitration
//
//  Created by Pavlo Boiko on 05.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#ifndef CurrencyTrades_hpp
#define CurrencyTrades_hpp

#include <stdio.h>
#include "Currency.hpp"

class CurrencyTrades {
public:
    Currency *fromCurrency;
    Currency *toCurrency;
    double price;
    CurrencyTrades(Currency *_fromCurrency,Currency *_toCurrency, double _price);
    void updatePrice(double newPrice);
};

#endif /* CurrencyTrades_hpp */
