#pragma once
#ifdef TESTNSISPLUGIN_EXPORTS
#define NSISPLUGIN_API extern "C" __declspec(dllexport)
#else
#define NSISPLUGIN_API extern "C" __declspec(dllimport)
#endif

#include <windows.h>
#include <nsis/pluginapi.h> // nsis plugin
/*
���Ժ������ò����������
*/
NSISPLUGIN_API int GetTest(HWND hwndParent, int string_size, char *variables, stack_t **stacktop, extra_parameters *extra);

/*
��ȡ��������
*/
NSISPLUGIN_API int GetChanleName(HWND hwndParent, int string_size, char *variables, stack_t **stacktop, extra_parameters *extra);