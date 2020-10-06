#include <iostream>

using namespace std;

int main(){

	int arr[5] = {1,2,3,4,5};
	int *p =(int*)&arr;
	cout<<"arr: "<<arr<<endl;
	cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
	cout<<"sizeof(*arr): "<<sizeof(*arr)<<endl;
	cout<<"p: "<<p<<endl;
	cout<<"*p: "<<*p<<endl;
	cout<<"sizeof(*p): "<<sizeof(*p)<<endl;
	cout<<"sizeof(p): "<<sizeof(p)<<endl;	
	return 0;
}
