
#include <iostream>

using namespace std;

int main(){
	int* ptr = NULL;
	
	// Should print 0 as it points to nothing
	printf("%p\n", ptr);

	// memory address where ptr itself is located [somewhere in address space of this process]
	printf("%p\n", &ptr);
	return 0;	
}
