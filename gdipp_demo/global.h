#pragma once

#include "gdipp_config/config.h"

namespace gdipp
{

extern config_file config_file_instance;
extern config config_instance;

// gdimm related
extern HMODULE h_gdimm;
extern WCHAR gdimm_path[MAX_PATH];
extern std::vector<HWND> paint_hwnd;

}

extern CAppModule _Module;
