//  log.cpp (The Source File) — The Worker
// This file contains the actual definitions—the real logic and code execution for the functions declared in log.h.


#include <iostream>
#include "log.h" // Includes the declarations so this file knows what it's implementing

void InitLog()
{
    Log("Initialising log");
}

void Log(const char* message)
{
    std::cout << message << std::endl; // The actual work gets done here
}

// Why it matters: This is where the code actually lives. Without log.cpp, your program would know that a function named Log exists, but it wouldn't know what it's supposed to do.
