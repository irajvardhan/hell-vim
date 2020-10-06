#include<iostream>
using namespace std;

int main()
{
	int a = 512;
	char *c = (char*)&a;
	c[0] = 1;
	c[1] = 2;
	
	// Should print 513 on a little-endian system
	cout<<a<<endl;
	return 0;
	
}
