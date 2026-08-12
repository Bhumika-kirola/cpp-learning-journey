/*
=============================================================
TOPIC: Destructors in C++ (Theory & Notes)

1. What is a Destructor?
- A destructor is a special method that runs automatically every time 
  you destroy an object.
- Its main purpose is to uninitialize or clear any memory that you've 
  used to prevent memory leaks.
- It applies to objects created on both the stack and the heap.

2. Constructor vs. Destructor Differences:
- WHEN IT RUNS:
  -> Constructor: Runs when you are creating a new instance of an object.
  -> Destructor: Runs anytime you destroy an object.
- PURPOSE:
  -> Constructor: You are doing initializing.
  -> Destructor: Used to uninitialize / clean up memory.

3. Syntax & Naming:
- Constructor: Entity() { }
- Destructor:  ~Entity() { }
  * Note: The '~' symbol placed before the class name is called a "tilde".
=============================================================
*/




#include <iostream>

using namespace std;

class Entity
{
    public:
    float X, Y, A, B;
    

    Entity()
    {
        cout << "entity created" << endl;
    }

    ~Entity()
    {
        cout << "entity destroyed" << endl;
    }

    void print()
    {
        cout << X << ", " << Y << endl;
        cout << A << ", " << B << endl;
    }
};

void function()
{
    Entity e;
    e.print();
}

int main()
{
    function();
}