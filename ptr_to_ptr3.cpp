#include <iostream>

using namespace std;

int main(){

	int a[] = {10,20,30,40,50};
	int *p[] = {a,a+3,a+4,a+1,a+2};
	int **ptr = p;
	
	ptr++;

	cout<<"ptr - p: "<<ptr - p<<endl;
	
	return 0;
	
}
