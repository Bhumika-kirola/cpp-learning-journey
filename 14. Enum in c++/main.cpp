/*
=============================================================
TOPIC: Enums in C++ (Theory & Notes)

1. What is an Enum?
- Enum stands for "enumeration". It is a set of named integer values.
- The main purpose is to group related values together, improve code readability, and restrict variables to a specific set of options.

2. Default Values:
- If unassigned, the first item defaults to 0, and subsequent items increment sequentially by 1.

3. Custom & Sequential Assignment:
- Explicitly assigning a value to one item (e.g., A = 5) causes subsequent items to continue incrementing from that value (6, 7...).

4. Underlying Types & Memory:
- Enums are always backed by an INTEGER type under the hood.
- You can specify a smaller underlying type (e.g., enum Example : unsigned char) to reduce memory consumption, but non-integer types (like float) are not allowed.

5. Scope & Name Conflicts (Classic Enums):
- Traditional enums "leak" their values into the parent scope. 
- If a name conflict occurs (e.g., a function shares a name with an enum value), you must use explicit prefixes (like LevelError) to avoid compilation errors.
=============================================================
*/



#include <iostream>

using namespace std;

enum non_declared_integer
{
    a,
    b,
    c
};
enum declared_integer
{
    d = 7,
    e,
    f
};
enum letter : char
{
    g = 65,
    h,
    i
};

int main()
{
    non_declared_integer value = a;
    if (value == a)
    {
        cout << a;
        cout << b;
        cout << c;
    }
    declared_integer value_d = d;
    if (value_d == d)
    {
        cout << d;
        cout << e;
        cout << f;
    }

    letter value_l = g;
    if (value_l == g)
    {
        cout << g;
        cout << h;
        cout << i;
    }
}