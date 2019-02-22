/*
 * Created by Simon
 * 2/22/2019
 */
#pragma once

#include "../includes.hpp"

class C_Detection {
public:
    enum WINE_MODULE_ID
    {

    };

    enum WINE_REPORT_ID
    {
        MEMORY_GUARD         = 0x21,
        MEMORY_SUSPICIOUS    = 0x2F,
        WINDOW_TITLE         = 0x33,
        MEMORY               = 0x35,
        DRIVER_BEEP_PRESENCE = 0x3E,
        DRIVER_NULL_PRESENCE = 0x3F,
        PROCESS_SUSPICIOUS   = 0x40,
        LSASS_MEMORY         = 0x42,
        MOUSE_ANOMALY        = 0x50,
        GENERIC_ANOMALY      = 0x48,
    };

    C_Detection() = default;
    virtual ~C_Detection() = default;

    virtual void on_mouse(WPARAM param)
    {
    }
};