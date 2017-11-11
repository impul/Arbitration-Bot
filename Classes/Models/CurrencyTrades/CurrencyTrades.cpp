//
//  CurrencyTrades.cpp
//  Arbitration
//
//  Created by Pavlo Boiko on 05.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#include "CurrencyTrades.hpp"

CurrencyTrades::CurrencyTrades(Currency *_fromCurrency,Currency *_toCurrency, double _price) {
    fromCurrency = _fromCurrency;
    toCurrency = _toCurrency;
    price = _price;
}

void CurrencyTrades::updatePrice(double newPrice) {
    price = newPrice;
}
