//
//  ExchangeCenter.hpp
//  Arbitration
//
//  Created by Pavlo Boiko on 05.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#ifndef ExchangeCenter_hpp
#define ExchangeCenter_hpp

#include <stdio.h>
#include <vector>
#include "CurrencyTrades.hpp"

typedef std::vector<CurrencyTrades *> CurrenciesTradesVector;

class ExchangeCenter {
public:
        ExchangeCenter(char *_name,
                   CurrenciesTradesVector _currencies,
                   double _fiatСurrencyInputTax,
                   double _cryptoСurrencyInputTax,
                   double _exchangeTax,
                   double _fiatCurrencyOutputTax,
                   double _cryptoCurrencyOutputTax);
    char *name;
    CurrenciesTradesVector currencies;
private:
    double fiatСurrencyInputTax;
    double cryptoСurrencyInputTax;
    double exchangeTax;
    double fiatCurrencyOutputTax;
    double cryptoCurrencyOutputTax;
};


#endif /* ExchangeCenter_hpp */
