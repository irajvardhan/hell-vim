#include<iostream>
using namespace std;

void bar(int* arr, int n){
	cout<<arr[0]<<endl;
}

void foo(int arr[], int n){
	cout<<arr[0]<<endl;
}
int main(){
	int arr[] = {1,2,3};
	foo(arr,3);
	bar(arr,3);
	return 0;
}
