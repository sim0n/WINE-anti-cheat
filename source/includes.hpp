/*
 * Created by Simon
 * 2/19/2019
 */

#pragma once

#pragma warning(disable : 4100) // unreferenced formal parameter
#pragma warning(disable : 4731) // frame pointer register modified
#pragma warning(disable : 4239) // nonstandard extension

#include <Windows.h>

#include <iostream>
#include <chrono>
#include <random>
#include <thread>

#include <CommCtrl.h>
#include <winnt.h>
#include <tlhelp32.h>
#include <shlwapi.h>
#include <iostream>
#include <atlstr.h>
#include <string>
#include <mmsystem.h>
#include <WinInet.h>
#include <time.h>
#include <vector>
#include <debugapi.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <gdiplus.h>
#include <Iphlpapi.h>
#include <VersionHelpers.h>
#include <ShlObj.h>
#include <fstream>
#include <DbgHelp.h>
#include <Psapi.h>
#include <gdiplus.h>
#include <utility>
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")
#pragma comment(lib, "ComCtl32.lib")
#pragma comment(lib, "shlwapi.lib")
#pragma comment (lib, "ws2_32.lib" )
#pragma comment(lib,"Winmm.lib")
#pragma comment(lib,"Comctl32.lib")
#pragma comment(lib, "wininet")
#pragma comment( lib, "Msimg32" )
#pragma comment(lib, "IPHLPAPI.lib")
#pragma comment(lib, "Dbghelp.lib")
#pragma comment (lib, "urlmon.lib")
