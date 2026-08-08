// log.cpp (The Source File) — The Worker
// This file contains the actual definitions—the real logic and code execution for the functions declared in log.h.


#include <iostream>
#include "log.h"

// Initialize logging function definition
void InitLog()
{
    Log("Initlizing log");
}

// Log function definition
void Log(const char* message)
{
    std::cout << message << std::endl;
}

//Why it matters: This is where the code actually lives. Without log.cpp, your program would know that a function named Log exists, but it wouldn't know what it's supposed to do.