#include <iostream>

using namespace std;

struct entity{
    static int x, y;
    void print(){
        cout << x << ", " << y << '\n';
    }
};

int entity::x;
int entity::y;
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