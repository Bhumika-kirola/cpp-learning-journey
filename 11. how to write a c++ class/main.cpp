
// main.cpp (The Entry Point) — The Director
// This is where your program starts running. It uses the header file to know what functions are available and calls them.


#include <iostream>
#include "log.h" // Gives main.cpp permission/knowledge to call Log() and InitLog()

int main()
{
    InitLog();          // Calls the function defined in log.cpp
    Log("Hello World!"); // Calls the function defined in log.cpp
}

// Why it matters: It coordinates everything and runs the program flow.
