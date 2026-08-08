/* ==========================================================
   TOPIC: Data Types in C++ (Theory & Notes)
   
   -There is no such thing as different data types for a computer. 
   -The only distinction is the size/memory one occupies, because for the computer, everything is just in ones and zeros.

   What exactly is a data type? 
   - For the computer: A data type determines how much memory would be allocated to a variable and how to interpret that variable based on that memory.
   - For us humans: It is a kind of abstraction of what type of value we expect as a result, plus it provides readability. 
     (When the program actually runs, everything is converted into binary. If the computer were to give us our output in raw binary language, it would be incredibly difficult for us to process and figure out the answer!)


    Primary Data Types & Memory Sizes
   - char   : 1 Byte  (Character / small integer value)
   - int    : 4 Bytes (Standard whole number integer)
   - float  : 4 Bytes (Single-precision floating-point number)
   - double : 8 Bytes (Double-precision floating-point number)
   - bool   : 1 Byte  (Boolean logic: true or false)
   - void   : 0 Bytes (Absence of type / empty)
   ========================================================== */


#include <iostream>

using namespace std;

int main(){
    int a;
    char b;
    float c;
    double d;
    long e;
    short f;

    // Proving human abstraction: The computer processes everything as raw binary numbers under the hood. 
    // Here, we assign 65 to a char. The computer handles it as binary, but because the data type is 'char', 
    // it interprets that binary value using the ASCII table and outputs the character 'A' for us humans to read easily.
    b = 65;
    cout << "--- Human Abstraction Example ---" << endl;
    cout << b; //// Output: A (Reason: In the ASCII table, the number 65 represents the character 'A')


    // Exploring differences between short, int, long, float, and double through code and size check:
    cout << "--- Memory Sizes ---" << endl;
    cout << "Size of short : " << sizeof(f) << " bytes" << endl; // Reason: Smallest standard integer type, saves memory for tiny numbers. (inplace of int in case of short memory)
    cout << "Size of int   : " << sizeof(a) << " bytes" << endl; // Reason: Standard integer used for normal whole numbers.
    cout << "Size of long  : " << sizeof(e) << " bytes" << endl; // Reason: Used when you need to store much larger whole numbers. (in place of int for the large memory)
    cout << "Size of float : " << sizeof(c) << " bytes" << endl; // Reason: Used for decimals, precision up to about 7 digits.
    cout << "Size of double: " << sizeof(d) << " bytes" << endl; // Reason: Used for precise decimals, double the precision of float (up to ~15 digits, in case of the float for more precision). 


    // Exploring unsigned specifier:
    unsigned int positiveOnly = 4000000000; // Can hold larger positive numbers than a regular signed int.
    cout << "Unsigned value: " << positiveOnly << endl; // Reason: Uses the sign bit to store positive data instead of plus/minus flags.
}


/*Type Specifiers (Modifiers) & Range Math 

                                             INTEGER


        1 Byte = 8 bits. 
        4 Bytes = 4* 8 = 32 bits
                   
        By permutation and combination, the total number of combinations using 0s and 1s is 2^(32).
        For a standard signed `int`, 1 bit is reserved for the sign (+ or -), leaving 32 - 1 = 31 bits for the value. 
        2^(31) gives a range up to roughly 4.29 billion (from -2,147,483,648 to +2,147,483,647$).
        For an `unsigned int`, we throw away the sign bit because we only want positive numbers. 
        This reclaims that space, doubling our maximum positive range to 2^(32), going from 0 up to roughly $4.29 billion (4,294,967,295). 
        There is no space left for negative numbers since every bit is used strictly for data value!*/