//
//  ArbitrationDemon.cpp
//  Arbitration
//
//  Created by Pavlo Boiko on 13.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#include "ArbitrationDemon.hpp"
#include <unistd.h>

ArbitrationDemon::ArbitrationDemon(std::vector<ExchangeCenter> _centers,int _updateInterval) {
    centers = _centers;
    shouldUpdate = true;
    updateInterval = _updateInterval;
    updateCenters();
}

void ArbitrationDemon::updateCenters() {
    if (!shouldUpdate) return;
    for(auto &center: centers) {
        center.update();
    }
    sleep(updateInterval);
    updateCenters();
}

void ArbitrationDemon::stopDemon() {
    shouldUpdate = false;
}
