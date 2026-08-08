/* ==========================================================
   TOPIC: Object-Oriented Programming (OOP) in C++ (Theory & Notes)
   
   1. Classes and Objects:
   - What is a Class? 
     A user-defined data type that allows grouping data (variables) and functions (methods) together in a single unit. It acts as a blueprint.
   - What is an Object? 
     Variables created from a class type are called objects. 
   - What is Instantiation? 
     When you run the program, the CPU allocates the memory for that object based on the class blueprint. This process is called instantiation (making an instance).

   2. Access Modifiers & Visibility:
   - By default, members of a class in C++ are **private**. You cannot access them outside the class unless you explicitly make them **public**.
   - `public`: Accessible anywhere throughout the program.
   - `private`: Accessible only within that particular class or its functions.

   3. Member Functions (Methods) vs External Functions:
   - Functions defined inside a class have direct access to the object's data members without needing to pass the object explicitly.
   - If a function is external, you have to pass the object (or its members) as arguments.
   ========================================================== */

#include <iostream>

using namespace std;

// Defining a class acting as a blueprint for student marks
class Marks {
private:
    // Private members (hidden by default)
    int internalScore;

public:
    // Public data members representing marks in Math, Chemistry, and Physics
    int math;
    int chemistry;
    int physics;

    // Member function (method) to calculate and display percentage
    void calculatePercentage() {
        int total = math + chemistry + physics;
        float percentage = total / 3.0f;
        cout << "Percentage (calculated via member function): " << percentage << "%" << endl;
    }
};

int main() {
    // Instantiating an object 'student1' from the 'Marks' class blueprint
    Marks student1;

    // Accessing public variables and assigning values
    student1.math = 85;
    student1.chemistry = 90;
    student1.physics = 88;

    cout << "--- Object-Oriented Programming Example ---" << endl;
    cout << "Math Marks: " << student1.math << endl;
    cout << "Chemistry Marks: " << student1.chemistry << endl;
    cout << "Physics Marks: " << student1.physics << endl;

    // Calling the class method directly using the object
    student1.calculatePercentage();

    return 0;
}