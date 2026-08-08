/* ==========================================================
   TOPIC: Functions in C++ (Theory & Notes)
   
   - function: A function is a reusable block of code written to perform a specific task (as many times as one wants).
   
   Why do we need to use functions?
   - To avoid duplicating code.


   Note: Functions inside classes are called "methods".

   Types of Functions:
   Functions are mainly of 2 types:
   1. Return Function
   2. Void Function

   --- 1. Return Function ---
   - A function that returns a value.
   - Must always have a Return Data Type (RDT) specified.
   - A value must be returned using the `return` keyword.
   - Note: `main()` is a special exception; you don't strictly need any explicit return statement in modern C++, though it is traditionally included.

   --- 2. Void Function ---
   - A function that does not return any value.

   Parameters & Arguments:
   - FP (Formal Parameter): The variables defined in the function signature (e.g., inside the function definition).
   - AP (Actual Parameter / Argument): The actual values or variables passed into the function when it is called.

   Performance Note:
   - Too many functions can slow down the program slightly because of stack management and memory jumps (pushing stack frames, jumping to memory locations, and returning).
   ========================================================== */

#include <iostream>

using namespace std;

// Example 1: Return Function (multiplies two numbers and returns the integer result)
int multiplyReturn(int a, int b) {  //formal parameter
    return a * b;
}

// Example 2: Void Function (multiplies two numbers and prints directly without returning)
void multiplyVoid(int a, int b) {
    int z = a * b;
    cout << "Void function product: " << z << endl;
}

int main() {
    int a, b;
    
    cout << "Enter two numbers to multiply: ";
    cin >> a >> b;

    // Testing the Return Function
    int result = multiplyReturn(a, b);
    cout << "--- Return Function Example ---" << endl;
    cout << "Product (from return function): " << result << endl; 
    // Reason: The function calculated the value and sent it back via 'return', which then is stored in 'result' and printed.

    // Testing the Void Function
    cout << "\n--- Void Function Example ---" << endl;
    multiplyVoid(7, 8);  //actual parameter
    // Reason: The function performed the calculation and handled the printing internally without returning anything back to main().

}