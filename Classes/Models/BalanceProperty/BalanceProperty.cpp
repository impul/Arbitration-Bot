//
//  BalanceProperty.cpp
//  Arbitration
//
//  Created by Pavlo Boiko on 11.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#include "BalanceProperty.hpp"

BalanceProperty::BalanceProperty(int _balance,Currency *_currency,ExchangeCenter *_center) {
    
}

bool BalanceProperty::incrementBalanceBySum(double sum) {
    balance += sum;
    return true;
}

bool BalanceProperty::decrementBalanceBySum(double sum) {
    if (balance>=sum) {
        balance -=sum;
        return true;
    }
    return false;
}

double BalanceProperty::getBalance() {
    return balance;
}
