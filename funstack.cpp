#include<iostream>
using namespace std;

int* foo(){
	int a = 123;
	int *p;
	p = &a;
	return p;
}

int* bar(){
	int a = 246;
	int *p;
	p = &a;
	return p;
}

int main()
{
	cout<<foo()<<endl;
	cout<<bar()<<endl;
	
	return 0;
	
}
