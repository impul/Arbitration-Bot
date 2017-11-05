//
//  Currency.cpp
//  Arbitration
//
//  Created by Pavlo Boiko on 05.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#include "Currency.hpp"

Currency::Currency(char* _name,CurrencyTradesVector _trades) {
    Currency::Currency(name,name[0],_trades);
}

Currency::Currency(char* _name,char _simbol,CurrencyTradesVector _trades) {
    name = _name;
    simbol = _simbol;
    trades = _trades;
}
