//main.cpp (The Entry Point) — The Director
//This is where your program starts running. It uses the header file to know what functions are available and calls them.
#include <iostream>
#include "log.h"

int main()
{
    InitLog();
    Log("Hello World!");
    std::cin.get();
}

// Why it matters: It coordinates everything and runs the program flow.