/* ==========================================================
   TOPIC: References in C++ (Theory & Notes)
   
   1. What is a Reference?
   - A reference is simply an alias (a second name) for an already existing variable.
   - Key Characteristic: It consumes **no separate memory or storage** of its own. It points directly to the original variable's memory location.

   2. Syntax & Rules:
   - Syntax: `Datatype &ReferenceName = OriginalVariable;` (e.g., `int &ref = a;`)
   - Important Rule: Once a reference is bound to a variable, it cannot be changed to reference another variable later. Assigning a new value to the reference changes the value of the *original* variable it points to.
   ========================================================== */

#include <iostream>

using namespace std;

int main() {
    // --- Example 1: Basic Reference (Alias) ---
    int a = 5;
    int &ref = a; // 'ref' is now an alias (second name) for 'a'

    cout << "--- Basic Reference Example ---" << endl;
    cout << "Value of a: " << a << endl;     // Output: 5
    cout << "Value of ref: " << ref << endl; // Output: 5

    // Modifying the reference modifies the original variable
    ref = 10;
    cout << "After changing ref to 10, a is: " << a << endl; // Output: 10 (a changed because ref is just an alias!)

    // --- Example 2: Reassignment Behavior ---
    // Note: You cannot make a reference point to a second value/variable in the way you might think.
    cout << "\n--- Reference Reassignment Rule Example ---" << endl;
    int x = 1;
    int y = 8;
    int &ref2 = x; // ref2 becomes an alias for x

    ref2 = y;      // This does NOT make ref2 point to y! 
                   // Instead, it copies the value of y (8) into x through the alias.
                   
    cout << "x = " << x << endl; // Output: 8 (x's value was overwritten)
    cout << "y = " << y << endl; // Output: 8
    cout << "ref2 = " << ref2 << endl; // Output: 8


}