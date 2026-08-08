/* ==========================================================
   TOPIC: Conditions and Branches in C++ (Theory & Notes)
   
   1. Definitions:
   - Branching: Deciding which 'block of code' to execute next, based on the evaluation of conditions.

   2. What Happens to the Memory and CPU?
   - 1: Source code translates into machine language and loads into memory (RAM).
   - Step 2: The CPU finds `main()` as the entry point and executes commands from top to bottom.
   - Step 3: When the CPU encounters an `if`, `else`, or `else if`, memory jump occurs.

   3. Low-Level Hardware & Branch Prediction Notes:
   - CPU Branch Prediction: The CPU tries to guess which branch will be true ahead of time. If correct, execution flows smoothly. If false, the predicted path is abandoned and the CPU rolls back/moves to the correct path.
   - Truthiness in C++: 
     - `0` = False.
     - Any Non-zero number = True.
   - Shorthand checks: 
     - `if (x)` = checking if `x != 0`.
     - `if (ptr)` = checking if `ptr != nullptr`.
   - Implicit condition behavior: If you write `if (x)` without an explicit operator, the CPU judges it based on whether it equals zero or not (non-zero runs the block, zero skips it).

   4. Linked vs. Independent Conditions
   - Linked Conditions (`else if` Chains):
     - Made of two keywords combined (`else` + `if`).
     - If any condition in the chain is found true, it skips all other remaining checks.
     - Best suited when you need only 1 final output/branch to run.
   - Independent Conditions (Multiple standalone `if` statements):
     - Each condition is checked separately.
     - The computer checks 'all' of them even if a previous one was true.
     - Best suited when multiple independent outputs or actions can happen simultaneously.
   ========================================================== */

#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Example 1: Basic Branching (Conditions & Branching)
    if (age >= 18) {
        cout << "Branching Result: You are an adult." << endl; // Executed if condition evaluates to true
    } else {
        cout << "Branching Result: You are a child." << endl; // Executed if condition evaluates to false
    }

    // Example 2: Linked Condition Chain (else if)
    int score = 85;
    cout << "\n--- Linked Condition Example ---" << endl;
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } 
    else if (score >= 80) {
        cout << "Grade: B" << endl; // This runs and skips all subsequent else-if checks in the chain
    } 
    else if(score < 80) {
        cout << "Grade: C" << endl;
    }

    // Example 3: Independent Conditions
    cout << "\n--- Independent Condition Example ---" << endl;
    int num = 1978;
    if (num > 0) {
        cout << "Number is positive." << endl; // Checked independently
    }
    if (num % 2 == 0) {
        cout << "Number is even." << endl;     // Checked independently, runs even though the first one also ran
    }
    if (num % 2){
        cout << "Number is odd" << '\n';
    }
}