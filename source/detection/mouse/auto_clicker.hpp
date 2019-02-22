/*
 * Created by Simon
 * 2/22/2019
 */

#pragma once

// OPEN NAMESPACE auto_clicker

#include "../detection.hpp"

class C_Auto_Clicker : public C_Detection {
public:
    C_Auto_Clicker();

    void on_mouse(WPARAM param) override;
};

// CLOSE NAMESPACE auto_clicker
