/* ==========================================================
   TOPIC: Classes vs Structs in C++ (Theory & Notes)
   
   1. The Core Difference:
   - In C++, `class` and `struct` are extremely similar and can both have member variables and methods.
   - The **only fundamental difference** between them is their default visibility/accessibility:
     - `struct`: Members are **public** by default.
     - `class`: Members are **private** by default.

   2. When to Use Which?
   - Struct (`struct`): Best used for passive data-carrier structures (plain old data/aggregates) where public access is desired out-of-the-box.
   - Class (`class`): Best used for Object-Oriented Programming (OOP) where data hiding, encapsulation, and private states are required.
   ========================================================== */

#include <iostream>

using namespace std;

// Example using struct (default visibility is public)
struct StudentStruct {
    string name; // Public by default
    int rollNo;  // Public by default

    void display() {
        cout << "Struct Student - Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

// Example using class (default visibility is private)
class StudentClass {
private:
    string name; // Private by default
    int rollNo;  // Private by default

public:
    // Setter function to safely assign values to private members
    void setData(string n, int r) {
        name = n;
        rollNo = r;
    }

    void display() {
        cout << "Class Student - Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    // --- Struct Demonstration ---
    // We can access struct members directly because they are public by default
    StudentStruct s1;
    s1.name = "Alice";
    s1.rollNo = 101;

    cout << "--- Struct vs Class Demonstration ---" << endl;
    s1.display();

    // --- Class Demonstration ---
    // We must use public methods (like setData) to access private members
    StudentClass c1;
    c1.setData("Bob", 102);
    c1.display();

    return 0;
}