/*
 * Created by Simon
 * 2/22/2019
 */

#include "auto_clicker.hpp"
#include "../../util/values.hpp"

void C_Auto_Clicker::on_mouse(WPARAM param)
{
    auto* info = reinterpret_cast<MSLLHOOKSTRUCT*>(param);

    // see: https://docs.microsoft.com/en-us/windows/desktop/api/winuser/ns-winuser-tagmsllhookstruct
    if (info->flags & LLMHF_INJECTED)
    {
        auto* mouse_report = new wine_report();

        mouse_report->unknown = 0;
        mouse_report->report_id = MOUSE_ANOMALY;
        mouse_report->data = info->flags;

        G::wine.report(&mouse_report, sizeof mouse_report);
    }
}

C_Auto_Clicker::C_Auto_Clicker() = default;

