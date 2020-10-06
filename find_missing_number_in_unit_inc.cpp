#include <iostream>

using namespace std;

int findMissing(int* arr, int len){
	
	if (arr[0] != 1){
		return 1;
	}

	for (int i=1;i<len;i++){
		if (arr[i]==arr[i-1] or arr[i] == arr[i-1]+1){
			continue;
		}
		return arr[i-1]+1;
	}
	return arr[len-1]+1;

}

int main(){

	int arr1[] = {1,1,1,2,2,2,3,3,4,4,6,6,8};	
	int len = sizeof(arr1)/sizeof(arr1[0]);
	// prints 5
	cout<<findMissing(arr1, len)<<endl;
	
	int arr2[] = {1,1,1,2,2,2,3,3,4,4,6,6};
	len = sizeof(arr2)/sizeof(arr2[0]);
	// prints 5
	cout<<findMissing(arr2, len)<<endl;

	int arr3[] = {2,2,2,3,3,4,4,6,6,8};
	len = sizeof(arr3)/sizeof(arr3[0]);
	// prints 1
	cout<<findMissing(arr3, len)<<endl;

	return 0;



}
