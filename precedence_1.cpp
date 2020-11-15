#include <iostream>

using namespace std;

int main(){
	int arr[] = {0,1,2,3,4};
	int *p = arr;

	cout<<"*p++ : "<<*p++<<endl;
	cout<<"(*p)++ : "<<(*p)++<<endl;
	cout<<"*p : "<<*p<<endl;

	return 0;


}
