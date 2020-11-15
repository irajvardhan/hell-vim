#include<iostream>

using namespace std;

int main(){
	
	int (*ap)[10];

	// prints 8
	cout<<"sizeof(ap): "<<sizeof(ap)<<endl;
	
	// prints 40
	cout<<"sizeof(*ap): "<<sizeof(*ap)<<endl;

	int *q[10];
	
	// prints 80 [q is a an array of 10 pointers to integers, each is 8 bytes]
	cout<<"sizeof(q): "<<sizeof(q)<<endl;

	// prints 8
	// *q is the first of 10 pointers
	cout<<"sizeof(*q): "<<sizeof(*q)<<endl;
	
	return 0;
}
