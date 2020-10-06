#include<iostream>
using namespace std;

int* foo(){
	int a = 123;
	int *p;
	p = &a;
	return p;
}

void fun1(){
	int a = 345;
	return;
}

int main()
{
	int *ptr;
	ptr = foo();
	
	// The value at the address pointed to by p is overridden when fun1 is called
	fun1();
	
	// This prints 345 as the value got overridden.
	cout<<*ptr<<endl;
	
	return 0;
	
}
