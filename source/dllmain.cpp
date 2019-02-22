#include "includes.hpp"
#include "util/values.hpp"

LRESULT CALLBACK hook_procedure(int code, WPARAM w_param, LPARAM l_param)
{
    if (code == HC_ACTION)
    {
        const auto detection_manager = G::detection_manager;

        std::for_each(detection_manager.detections.begin(), detection_manager.detections.end(), [&](C_Detection* detection)
        {
            detection->on_mouse(w_param);
        });
    }

    return CallNextHookEx(nullptr, code, w_param, l_param);
}

DWORD WINAPI entry_point()
{
    const auto mouse_hook = SetWindowsHookEx(WH_MOUSE_LL, hook_procedure, GetModuleHandle(nullptr), NULL);

    MSG msg;
    while (GetMessage(&msg, nullptr, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
    while (true)
    {
        // Practically a keep-alive
        std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    }
#pragma clang diagnostic pop
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE) entry_point, nullptr, NULL, nullptr);
            break;

        default:

            break;
    }

    return TRUE;
}