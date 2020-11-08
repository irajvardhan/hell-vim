#include<iostream>

using namespace std;

int main(){
	int a[] = {10,20,30,40,50};
	int *p[] = {a,a+1,a+2,a+3,a+4};

	cout<<"*p: "<<*p<<endl;
	cout<<"*p + 1: "<<*p+1<<endl;
	cout<<"*(p+1): "<<*(p+1)<<endl;
	
}
