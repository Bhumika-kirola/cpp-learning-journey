// log.h (The Header File) — The Blueprint
// Think of the header file as a menu or a table of contents. It doesn’t actually do any work or contain any heavy code; it just lists the declarations (the names and signatures of functions) so other files know they exist.

#pragma once

void Log(const char* message);
void InitLog();


// Why it matters: When main.cpp wants to call Log(), it needs to know what parameters it accepts and what it returns. It looks at log.h to find out.