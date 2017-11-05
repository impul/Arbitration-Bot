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

class CurrencyTrades {
public:
    char *toCurrency;
    double price;
    CurrencyTrades(char *_toCurrency, double _price);
};

#endif /* CurrencyTrades_hpp */
