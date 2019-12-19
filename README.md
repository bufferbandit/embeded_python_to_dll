# embeded_python_to_dll
Compile Python embeded C to a DLL

C:\mingw\MinGW\bin>gcc -Wall -IC:\Python32\include -LC:\Python32\libs  py_c_compile.c -lpython32 -shared -o runner.dll

rundll32 runner.dll,run
