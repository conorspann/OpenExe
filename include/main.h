
#ifndef MAIN_H
#define MAIN_H

#if defined(_WIN32) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
    #define OS_NAME "windows"
#elif defined(__unix) || defined(__unix__)
    #define OS_NAME "unix"
#elif defined(__APPLE__) || defined(__MACH__)
    #define OS_NAME "mac"
#elif defined(__linux__)
    #define OS_NAME "linux"
#else
    #define OS_NAME "unknown"
#endif

int openexe_execute(std::string pathToExe, std::vector<std::string> cmdArgs);

#endif // MAIN_H
