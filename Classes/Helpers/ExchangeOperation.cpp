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
    return isSameCurrency;
}

bool ExchangeOperation::makeExchange(double sum) {
    return true;
}

