#include "pch.h"
#include "convstring.h"
//using namespace std;
//using namespace System;
void MarshalString(String^ s, string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}