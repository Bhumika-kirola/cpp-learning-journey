/*
=============================================================
TOPIC: Static Methods in C++ (Theory & Notes)

1. Static Methods Overview:
- When you make a method static, it works fine with static variables.
- In the case of non-static variables, static methods cannot get access to them.
- Why? Because static methods don't have a 'this' parameter, so they don't know which object instance they have to look into.
- Effectively, it is like a function written outside a class.
- To access non-static variables from a static method, you must explicitly pass an object 
  instance into the method as a parameter.
============================================================= */



#include <bits/stdc++.h>

using namespace std;


struct entity{
    static int x, y;
    int a, b;

    static void print(){    // print(entity& e)
        cout << x << ", " << y;
       //cout << a << ", "<< b;  //thsi will give out the error as the static method dont know which object instance they have look into as they dont have this parameter
    }
};

int entity::x;
int entity::y;

int main(){
    entity e;
    entity e1;
    entity::x=5;
    entity::y=6;
    entity::print(); // entity::print(e);
}