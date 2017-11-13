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
#include <string>
#include <vector>
#include "CurrencyTrades.hpp"
#include "BalanceProperty.hpp"

typedef std::vector<CurrencyTrades *> CurrenciesTradesVector;
typedef std::vector<BalanceProperty *> BalancesVector;

class ExchangeCenter {
public:
    ExchangeCenter(std::string *_name,
                   double _fiatСurrencyInputTax,
                   double _cryptoСurrencyInputTax,
                   double _exchangeTax,
                   double _fiatCurrencyOutputTax,
                   double _cryptoCurrencyOutputTax);
    std::string *name;
    CurrenciesTradesVector currencies;
    BalancesVector balances;
    
    virtual void update(){};
private:
    double fiatСurrencyInputTax;
    double cryptoСurrencyInputTax;
    double exchangeTax;
    double fiatCurrencyOutputTax;
    double cryptoCurrencyOutputTax;
};


#endif /* ExchangeCenter_hpp */
