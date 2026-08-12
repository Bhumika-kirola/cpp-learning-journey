/*
=============================================================
TOPIC: Constructors in C++ (Theory & Notes)

1. What is a Constructor?
- A constructor is a special type of method that runs automatically every time an object is instantiated.
- Main Purpose: Automatically initialize class variables when an object is created.
- Rules: It has the exact same name as the class and does not have a return type.

2. Default Constructor:
- C++ provides a default constructor automatically if you don't write one, but its block of code is empty (e.g., Entity() { } ).
- Constructors won't run until you actually instantiate an object.

3. Constructors with Parameters:
- You can create parameterized constructors that take arguments to initialize member variables with specific values (e.g., Entity(float x, float y)).

4. Deleting / Disabling a Constructor (How to Prevent Instantiation):
- Purpose: To prevent any objects of the class from being instantiated.
- Method 1: Make the constructor private and empty.
- Method 2: Delete it explicitly using the delete keyword:
  Entity() = delete;
=============================================================
*/


#include <iostream>

using namespace std;

class Entity
{
    public:
    float X, Y, A, B;
    

    Entity (float a, float b)
    {
        A = a;
        B = b; 
        X = 0.0f;
        Y = 0.0f;
    }
    void print()
    {
        cout << X << ", " << Y << endl;
        cout << A << ", " << B << endl;
    }
};


class log
{
    public:
    log() = delete;
    static void print()
    {

    }
};

class logl
{
    private:
    logl()
    {

    }
    public:
    static void print()
    {

    }
};

int main()
{
    Entity e(3.1f, 4.9f);
    e.print();
    //log.l; can't create it as the default constructor is removed
    // logl.l; another way to delete
}