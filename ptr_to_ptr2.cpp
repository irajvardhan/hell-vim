#include <iostream>

using namespace std;

int main(){
	int r = 20;
	int *pi = &r;
 	
	int **ppi = &pi;
	
	// address where r is stored
	cout<<"pi: "<<pi<<endl;

	// value pointed to by pi [20]
	cout<<"*pi: "<<*pi<<endl;

	// address pointed to by ppi [address where pi is stored]
	cout<<"ppi: "<<ppi<<endl;

	// value pointed to by ppi [address stored by pi = address where r is stored]
	cout<<"*ppi "<<*ppi<<endl;
	
	int q = 10;
	*ppi = &q;
	cout<<"-------"<<endl;

	// address where q is stored
	cout<<"pi: "<<pi<<endl;

	// value pointed to by pi which is 20
	cout<<"*pi "<<*pi<<endl;

	// same as before: address where pi is stored
	cout<<"ppi: "<<ppi<<endl;

	// address where q is stored
	cout<<"*ppi: "<<*ppi<<endl;
	
	return 0;
	
}
