/*
 * Created by Simon
 * 2/22/2019
 */

#pragma once

// OPEN NAMESPACE detection_manager

#include <vector>
#include "../detection.hpp"

class C_Detection_Manager {
public:
    C_Detection_Manager();

    std::vector<C_Detection*> detections;
};

// CLOSE NAMESPACE detection_manager
