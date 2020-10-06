#include <iostream>
using namespace std;
 
class Test 
{
	public:  
		int x;
		Test() { x = 5;}
};
 
int main()
{
   Test *t = new Test();
   cout << t->x;
}
