#include<iostream>
#include<string.h> // memset
#include<stdlib.h> //malloc

using namespace std;

int main(){
	int* arr = (int*)malloc(5*sizeof(int));
	memset(arr, 1, 5*sizeof(int));
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
