/* ==========================================================
   TOPIC: Control Flow Statements in C++ (Theory & Notes)
   
   What are Control Flow Statements?
   - They work with loops and give us control over how loops run and behave.
   - There are 3 main control flow statements:
     1. break
     2. continue
     3. return

   --- 1. Break Statement ---
   - Used inside loops.
   - Breaks entirely out of that specific block/loop (terminates the loop prematurely).

   --- 2. Continue Statement ---
   - Can only be used inside loops.
   - Tells the program to skip the current iteration and jump straight to the next iteration if there is one.

   --- 3. Return Statement ---
   - Breaks out of the whole function entirely, not just a loop.
   ========================================================== */

#include <iostream>

using namespace std;

int main() {
    // --- Example 1: Break Statement ---
    // This loop runs from 0 to 9, but when i reaches 5, 'break' kicks in 
    // and exits the loop entirely.
    cout << "--- Break Statement Example ---" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exits the loop when i is 5
        }
        cout << i << " ";
    }
    cout << endl; // Output: 0 1 2 3 4

    // --- Example 2: Continue Statement ---
    // This loop prints numbers 0 to 9, but when i equals 5, 'continue' skips 
    // printing 5 for that specific iteration and moves straight to 6.
    cout << "\n--- Continue Statement Example ---" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // Skips printing when i is 5, but keeps the loop running
        }
        cout << i << " ";
    }
    cout << endl; // Output: 0 1 2 3 4 6 7 8 9

    return 0;
}