#include<iostream>
using namespace std;

void foo(int* p){
	*p = *p + 1;
}


int main()
{
	int a = 10;
	foo(&a);
	
	//prints 11
	cout<<a<<endl;
	
	return 0;
	
}
