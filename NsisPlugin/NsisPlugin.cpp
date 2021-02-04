// NsisPlugin.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "NsisPlugin.h"
#include <string>
#include <Shlwapi.h>

#pragma comment(linker, "/NODEFAULTLIB:libc.lib")
#pragma comment(lib,"pluginapi.lib")
#pragma comment(lib,"Shlwapi.lib")

int GetTest(HWND hwndParent, int string_size, char *variables, stack_t **stacktop, extra_parameters *extra)
{
	EXDLL_INIT();
	pushstring("我是xp...");
	return 0;
}

int GetChanleName(HWND hwndParent, int string_size, char *variables, stack_t **stacktop, extra_parameters *extra)
{
	EXDLL_INIT();
	char szDir[MAX_PATH] = "\0";
	GetModuleFileNameA(NULL, szDir, MAX_PATH);
	std::string setupname = std::string(PathFindFileNameA(szDir));
	setupname = setupname.substr(setupname.find_first_of("_") + 1, setupname.length() - 1);
	setupname = setupname.substr(setupname.find_first_of("_") + 1, setupname.length() - 1);
	setupname = setupname.substr(0, setupname.rfind("."));
	pushstring(setupname.c_str());
	return 0;
}