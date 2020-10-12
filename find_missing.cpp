#include <iostream>

using namespace std;

// array is unsorted and contains size=n-1 integers in range [1..n]
int find_missing(int arr[], int size){
	// our range is [1...n] and one number is missing in this range
	int n = size + 1;
	
	int s = 1;

	for (int i=0; i<n-1; i++){
		// prevents overflow
		s += (i+2) - arr[i];
	}
	
	// s = (1 + 2 + 3 + .... n) - (arr[0] - arr[1] - .... arr[n-1])
	return s;
}


int find_missing_using_xor(int arr[], int size){
	int n = size + 1;

	int ans = n;

	for (int i=0; i<n-1;i++){
		ans ^= (i+1)^arr[i];
	}	

	return ans;

}

/* array is sorted and contains n-1 integers in range [1..n]
The idea is that the elements appearing before the missing element will have ar[i] = i+1 
and those appearing after the missing element will have ar[i] = i + 2
*/   
int find_missing_in_sorted(int arr[], int size){
	int n = size+1;
	int left = 0;
	int right = size - 1;

	// make left point to the index where the missing number would be present had it been included	
	while (left <= right){
		int mid = left + (right-left)/2;

		if (arr[mid] == mid + 1){
			left = mid + 1;	
		}else{
			right = mid - 1;
		}
	}
	
	// left will be pointing to the position of the missing number
	// NOTE: if missing number is n, l will be pointing to index n (outside the array)
	return left+1;
}


int main(){
	// First we consider case of an unsorted array
	// Here we can only have an O(n) solution
	int arr[7] = {1,2,4,6,3,7,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	//int ans = find_missing(arr, size);
	int ans = find_missing_using_xor(arr, size);
	cout<<"Missing num in unsorted array is: "<<ans<<endl;
	
	// Lets consider the case of a sorted array
	// Here we can get an O(logn) solution
	
	// should give 8
	int arr2[7] = {1,2,3,4,5,6,7};
	
	// should give 1
	//int arr2[3] = {2,3,4};
	
	// should give 7 
	//int arr2[7] = {1,2,3,4,5,6,8};

	
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	int ans2 = find_missing_in_sorted(arr2, size2);
	cout<<"Missing num in sorted array is: "<<ans2<<endl;
	
	return 0;

}
