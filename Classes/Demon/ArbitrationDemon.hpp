//
//  ArbitrationDemon.hpp
//  Arbitration
//
//  Created by Pavlo Boiko on 13.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#ifndef ArbitrationDemon_hpp
#define ArbitrationDemon_hpp

#include <stdio.h>
#include "ExchangeCenter.hpp"

class ArbitrationDemon {
public:
    ArbitrationDemon(std::vector<ExchangeCenter> _centers,int _updateInterval);
    void stopDemon();
private:
    std::vector<ExchangeCenter> centers;
    void updateCenters();
    bool shouldUpdate;
    int updateInterval;
};

#endif /* ArbitrationDemon_hpp */
