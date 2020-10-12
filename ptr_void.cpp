#include <iostream>

using namespace std;

int main(){

	void *p;
	p = (void *)0;
	
	// prints 8 (size of pointer)
	cout<<sizeof(p)<<endl;
	
	return 0;
}
