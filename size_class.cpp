#include<iostream>
using namespace std;

class Test{
	static int x;
	int y;
	char z;
};

int main(){
	Test t;

	// will not include static int x
	cout<<sizeof(t)<<endl;
	return 0;	
}
