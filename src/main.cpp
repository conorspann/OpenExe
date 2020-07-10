
#include <string>
#include <vector>
#include <iostream>

#include "../include/main.h"

#if OPENEXE_OS_NAME == OPENEXE_OS_WINDOWS
    #include "windows.h"
#endif

int openexe::execute(std::string pathToExe, std::vector<std::string> cmdArgs)
{
    #if OPENEXE_OS_NAME == OPENEXE_OS_WINDOWS
        //CreateProcessA(pathToExe.c_str(), cmdArgs, NULL, NULL, false, 0, NULL, NULL, );
    #endif

    return 0;
}

