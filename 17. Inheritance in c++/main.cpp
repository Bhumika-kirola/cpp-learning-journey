/*
=============================================================
TOPIC: Inheritance in C++ (Theory & Notes)

1. What is Inheritance?
- Inheritance is one of the fundamental core concepts in C++.
- It allows a new class (subclass) to inherit, derive, or adopt the properties of an existing class (base class).

2. Visibility & Polymorphism:
- Whatever is defined in the 'public' section of the base class will be visible and accessible to the subclass.
- By using polymorphism, you can modify (or override) the base class functions inside the subclass.

3. Types of Inheritance:
- Single Inheritance:
  Consists of 1 base class mapped to 1 subclass.(Example: An 'Entity' class acts as the single base class that passes its properties down to a 'Player' subclass).

- Multiple Inheritance:
  Consists of multiple base classes mapped to 1 subclass.(Example: 'Entity', 'Entity1', and 'Entity2' all pass their properties down to a single 'Player' subclass).
=============================================================
*/
#include <iostream>

using namespace std;

class Entity
{
public:
    int X, Y;

    Entity()
    {
        X = 0;
        Y = 0;
    }

    Entity(int x, int y)
    {
        X = x;
        Y = y;
    }

    void move()
    {
        cout << X << ", " << Y << endl;
    }
};

class Player : public Entity
{
public:
    int score;
    void name(int *value)
    {
        cout << *value << endl;
    }
};

int main()
{
    Entity e(12, 13);
    e.move();
    Player player;
    int a;
    a = 56;
    player.name(&a);
    cout << sizeof(Entity);
    cout << sizeof(Player);
}