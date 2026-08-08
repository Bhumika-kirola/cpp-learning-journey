/* ==========================================================
   TOPIC: Pointers in C++ (Theory & Notes)
   
   1. Introduction to Pointers:
   - The most important thing in programming is memory.
   - Pointers are used to manage and manipulate memory directly.
   - What is a pointer? A pointer is a variable (specifically an integer-type variable under the hood) which stores a **memory address**.
   - Memory layout: RAM in a computer looks like a linear, straight line of boxes (houses), where each box is 1 Byte. A pointer (`ptr`) holds the address of that specific box.

   2. Pointer Syntax & Operators:
   - Declaration Syntax: `Datatype *PointerName = Value;` (e.g., `int *bar = &b;`)
   - `&` operator: "Address of" a variable.
   - `*` operator: "Follow the direction / dereference / move to the address" to get or modify the value stored inside that box.

   3. Pointer Data Type Rule:
   - The data stored in the box whose address the pointer holds determines the pointer's data type. A pointer's type must match the data type of the variable it points to.

   4. How It Works Under the Hood (Memory & Execution):
   - When you declare a pointer like `int *bar = &b;`, `bar` stores the actual hexadecimal memory address of variable `b`.
   - Printing `bar` gives you the memory address.
   - Using `*bar` (dereferencing) tells the CPU: "Go to that address in memory and fetch whatever value is stored inside it" (e.g., yielding `8`).
   ========================================================== */

#include <iostream>

using namespace std;

int main() {
    // Declaring a normal integer variable 'b' and storing 8 in it
    int b = 8;

    // Declaring a pointer 'bar' that stores the memory address of 'b'
    int *bar = &b;

    cout << "--- Pointer Basics Example ---" << endl;
    
    // Printing 'bar' outputs the memory address of 'b'
    cout << "Address of b (stored in bar): " << bar << endl; 

    // Printing '*bar' follows the address (dereferences it) and retrieves the value 8
    cout << "Value at address (*bar): " << *bar << endl; 
    // Reason: The '*' operator tells the computer to "follow the direction" 
    // to the memory address stored in 'bar' and extract the value (8) inside that box.

}