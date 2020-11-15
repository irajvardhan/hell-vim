#include <iostream>
using namespace std;
 
class A
{
private:
    int x;
public:
    A() { x=0;}
    A(int _x)  {  x = _x; }
    int get()  { return x; }
};
 
class B
{
    static A a;
public:
   static int get()
   {  return a.get(); }
};

A B::a;

// If A didn't have default constructor we need to do below:
// A B::a(0);

int main(void)
{
    B b;
    cout << b.get();
    return 0;
}
