/* ==========================================================
                                       UNDERSTAND MULTIPLE FILE LINKING AND STATIC OUTSIDE REALLY WORK IN 11TH FOLDER
   TOPIC: Static Keyword in C++ (Theory & Notes)
   
   1. Two Contexts of Static:
   Depending on where you use it, static behaves differently:
   - Outside class / struct (File Scope / Internal Linkage)
   - Inside class / struct (Class Scope / Shared Data)

   2. Static Outside Class / Struct (Global Variables & Linkage):
   - Problem in Multi-file Programs: When linking multiple `.cpp` files together, the linker combines them into a single executable file. If multiple files define global variables with the same name (e.g., `int x = 5;` in `main.cpp`, `int x = 6;` in `1.cpp`), the linker throws a multiple-definition error.
   - Solution using `static`: Declaring a global variable as `static int x = 5;` makes it **internal linkage** (visible only to that specific translation unit/file). It prevents naming collisions across different `.cpp` files.
   ========================================================== */

#include <iostream>

using namespace std;

// --- Static Global Variable Example ---
// This variable has internal linkage. Even if another file in the project 
// has a global variable named 'globalX', it won't conflict with this one.
static int globalX = 10;

void displayStaticDemo() {
    // --- Static Local Variable Example ---
    // A static local variable retains its value between function calls.
    static int counter = 0; 
    counter++;
    cout << "Counter value (retained across calls): " << counter << endl;
}

int main() {
    cout << "--- Static Keyword Demonstration ---" << endl;
    cout << "Global X (Internal Linkage): " << globalX << endl;

    // Calling the function multiple times shows that 'counter' retains its state
    displayStaticDemo(); // Output: 1
    displayStaticDemo(); // Output: 2
    displayStaticDemo(); // Output: 3

    return 0;
}
