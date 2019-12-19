#include<stdio.h>
#include<Windows.h>
#include<Python.h>

void CALLBACK run(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow)
{
	
	Py_Initialize();
	PyRun_SimpleString(
		"import os\n"
		"os.system('hi_from_python')\n"
	);
	Py_Finalize();
}
