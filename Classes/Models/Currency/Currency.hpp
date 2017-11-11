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

class Currency {
    Currency(char* _name);
    Currency(char* _name,char _simbol);
    
public:
    char* name;
    char simbol;
};


#endif /* Currency_hpp */
