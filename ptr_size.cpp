#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int *p = arr;
	
	//prints 8 on a 64 bit machine
	cout<<sizeof(p)<<endl;

	// prints 24 (assuming int takes 4 bytes)
	cout<<sizeof(arr)<<endl;	
	return 0;
	
}
