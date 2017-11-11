//
//  ExchangeCenter.cpp
//  Arbitration
//
//  Created by Pavlo Boiko on 05.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#include "ExchangeCenter.hpp"

ExchangeCenter::ExchangeCenter(char *_name,
               CurrenciesTradesVector _currencies,
               double _fiatСurrencyInputTax,
               double _cryptoСurrencyInputTax,
               double _exchangeTax,
               double _fiatCurrencyOutputTax,
               double _cryptoCurrencyOutputTax)
{
    name = _name;
    currencies = _currencies;
    exchangeTax = _exchangeTax;
    fiatCurrencyOutputTax = _fiatCurrencyOutputTax;
    fiatСurrencyInputTax = _fiatСurrencyInputTax;
    cryptoСurrencyInputTax = _cryptoСurrencyInputTax;
    cryptoCurrencyOutputTax = _cryptoCurrencyOutputTax;
}
