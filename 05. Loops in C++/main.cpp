/* ==========================================================
   TOPIC: Loops in C++ (Theory & Notes)
   
   1. Why loops are used?
   -  block of code needed to be used multiple times.

   2. Types of Loops:
   There are 3 main types of loops:
   1. For loop
   2. While loop
   3. Do-while loop

   Note: All loops are fundamentally the same; the only difference is the way they are used and structure.

   --- Details of Each Loop ---
   - For Loop: Used when the number of iterations is known beforehand (we know how many times the loop is going to run).
     - Initialization: Declare and initialize the iterator (e.g., `int i = 0`).
     - Condition: State the looping condition (checked before every iteration).
     - Update: Increment or decrement the iterator after each run.

   - While Loop: Used when the number of iterations is *not* known beforehand (we don't know how many times it's going to run).

   - Do-While Loop: Similar to a while loop, but it guarantees that the code runs **at least once**, even if the condition isn't satisfied initially (because the condition is checked at the *end* of the block).
     
   ========================================================== */

#include <iostream>

using namespace std;

int main() {
    // --- 1. For Loop Example ---
    cout << "--- For Loop (Iterations Known) ---" << endl;
    for (int i = 0; i < 5; i++) {   //Structure: `for (initialization; condition; update) { }`
        cout << "For loop iteration: " << i << endl; 
    }

    // --- 2. While Loop Example ---
    cout << "\n--- While Loop (Iterations Unknown) ---" << endl;
    int j = 0;
    while (j < 5) {             //- Structure: `while (condition) { }`
        cout << "While loop iteration: " << j << endl;
        j++;
    }

    // --- 3. Do-While Loop Example ---
    cout << "\n--- Do-While Loop (Runs at least once) ---" << endl;
    int k = 0;
    do {    //- Structure: `do { } while (condition);`
        cout << "Do-while loop iteration: " << k << endl;
        k++;
    } while (k < 5);

    return 0;
}