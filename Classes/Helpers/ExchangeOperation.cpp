//
//  ExchangeOperation.cpp
//  Arbitration
//
//  Created by Pavlo Boiko on 11.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#include "ExchangeOperation.hpp"

ExchangeOperation::ExchangeOperation(BalanceProperty *_fromBalance,BalanceProperty *_toBalance){
    fromBalance = _fromBalance;
    toBalance = _toBalance;
}

bool ExchangeOperation::canMakeExchange(double withSum){
    bool isSameCurrency = fromBalance->currency->simbol == toBalance->currency->simbol;
    bool isSameExchangeCenter = fromBalance->center->name == toBalance->center->name;
    if (isSameExchangeCenter&&isSameCurrency) {
        return false;
    }
    if (isSameCurrency) {
        return true;
    }
    if (isSameExchangeCenter) {
        bool exchangeCenterCotainTrade = false;
        CurrenciesTradesVector trades = fromBalance->center->currencies;
    std::for_each(trades.begin(), trades.end(), [this,&exchangeCenterCotainTrade](CurrencyTrades *trade){
            if (trade->fromCurrency->name == fromBalance->currency->name &&
                trade->toCurrency->name == toBalance->currency->name) {
                exchangeCenterCotainTrade = true;
            }
        });
        return exchangeCenterCotainTrade;
    }
    return false;
}

bool ExchangeOperation::makeExchange(double sum) {
    return true;
}

