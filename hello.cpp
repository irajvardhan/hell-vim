#include<iostream>
using namespace std;

void foo(int* p){
	*p = *p + 1;
}


int main()
{
	int a = 10;
	int *p;
	p = &a;
	foo(p);
	
	cout<<a<<endl;
	
	return 0;
	
}
