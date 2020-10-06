#include<iostream>
using namespace std;

int* foo(){
	
	int *p = (int*)malloc(sizeof(int));
	*p = 123;
	return p;
}

int* bar(){
	int *p = (int*)malloc(sizeof(int));
	*p = 246;	
	return p;
}

int main()
{
	// prints 123
	cout<< *foo()<<endl;
	
	// prints 246
	cout<< *bar()<<endl;	
	return 0;
	
}
