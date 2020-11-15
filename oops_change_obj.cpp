#include<iostream>
using namespace std;
 
class Test
{
private:
  int x;
public:
  Test(int x = 0) { this->x = x; }
  //void change(Test *t) { this = t; }
  
  void print() { cout << "x = " << x << endl; }
};
 
int main()
{
  Test obj(5);
  Test *ptr = new Test (10);
  
  // ERROR: this is a const pointer => its illegal to do this=t;
  //obj.change(ptr);
  
  obj = *ptr;
  
  obj.print();
  return 0;
}
