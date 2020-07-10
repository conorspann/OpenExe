
#ifndef MAIN_H
#define MAIN_H

#define OPENEXE_OS_WINDOWS  1
#define OPENEXE_OS_UNIX  2
#define OPENEXE_OS_MAC  3
#define OPENEXE_OS_LINUX  4
#define OPENEXE_OS_UNKNOWN  5


#if defined(_WIN32) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
    #define OPENEXE_OS_NAME (OPENEXE_OS_WINDOWS)
#elif defined(__unix) || defined(__unix__)
    #define OPENEXE_OS_NAME (OPENEXE_OS_UNIX)
#elif defined(__APPLE__) || defined(__MACH__)
    #define OPENEXE_OS_NAME (OPENEXE_OS_MAC)
#elif defined(__linux__)
    #define OPENEXE_OS_NAME (OPENEXE_OS_LINUX)
#else
    #define OPENEXE_OS_NAME (OPENEXE_OS_UNKNOWN)
#endif

namespace openexe{
    int execute(std::string pathToExe, std::vector<std::string> cmdArgs);
}

#endif // MAIN_H
