#include <iostream>
using namespace std;

class MyClass {
	int x;
	char c;
	double d;
	float f;
};


int main()
{
    MyClass obj;
    cout << "size: " << sizeof(obj) << endl;

    return 0;
}
