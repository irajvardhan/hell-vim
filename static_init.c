#include <stdio.h>


int init(){
	return 10;
}

int main(){
	// below line gives compile time error in C but works ok in C++
	static int i=init();// not ok
	printf("%d",i);

	static int j; // ok!
	printf("%d",j); // prints 0 in C and also in C++
	
	return 0;
}
