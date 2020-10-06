#include <iostream>

using namespace std;

void fun(int** ppi){
	static int q = 10;
	*ppi = &q;
}

int main(){
	int r = 20;
	int *pi = &r;
 	
	fun(&pi);	
	
	// prints 10
	cout<<*pi<<endl;

	return 0;
	
}
