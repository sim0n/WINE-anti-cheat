/*
 * Created by Simon
 * 2/22/2019
 */

#include "detection_manager.hpp"
#include "../mouse/auto_clicker.hpp"

C_Detection_Manager::C_Detection_Manager()
{
    this->detections.push_back(new C_Auto_Clicker());
}
