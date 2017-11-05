//
//  Currency.hpp
//  Arbitration
//
//  Created by Pavlo Boiko on 05.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#ifndef Currency_hpp
#define Currency_hpp

#include <stdio.h>
#include <vector>

#include "CurrencyTrades.hpp"

typedef std::vector<CurrencyTrades> CurrencyTradesVector;

class Currency {
    Currency(char* _name,CurrencyTradesVector _trades);
    Currency(char* _name,char _simbol,CurrencyTradesVector _trades);
    
public:
    char* name;
    char simbol;
    CurrencyTradesVector trades;
};


#endif /* Currency_hpp */
