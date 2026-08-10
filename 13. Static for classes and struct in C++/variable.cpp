/*
=============================================================
TOPIC: Static in Class/Struct (Theory & Notes)

1. What is Static in a Class/Struct?
- If you use static for variable in class/struct, there is only going to be one shared memory of that variable across all instances of the class (shared memory). that means whatever changes you make into the instance of object regarding that memory it will reflect across all the instances.
- A static variable behaves like a global variable that belongs to the class.

2. Behavior and Shared Memory:
- Whatever changes you do to the object instance regarding that variable, those changes are going to reflect throughout the object instances in that variable case.
- All the object instances of that variable will have shared memory.
  
3. External Definition Requirement (Linker Rule):
- Declaring a static variable inside a class is not enough; you must define it outside 
  the class (e.g., int entity::x;). 
- Without this definition, you will get an "unresolved external symbol" Linker error.
============================================================= */


#include <iostream>

using namespace std;

struct entity{
    static int x, y;
    void print(){
        cout << x << ", " << y << '\n';
    }
};

int entity::x;    //External definition requirement: static variables need to be defined
int entity::y;    //without proper definition can cause a compilation/linker error.
int main(){

    entity e;
    e.x=3;
    e.y=4;
    entity e1;
    e1.x=1;
    e1.y=2;
    e.print();
    e1.print();
}