#include<iostream>
using namespace std;

class Test{
public:
	static int x1;
	static int x2;
        static int x3;	
	char c1;
	char c2;
	int a;
};

int main(){
	Test t;
	// This is not impacted by static members which are not associated with class objects
	// This prints 8 because 1+1+4 = 6. I think it rounds it to closest higher multiple of 8.
	cout<<sizeof(t)<<endl;

	// simply prints 8 
	cout<<sizeof(Test*)<<endl;

}
