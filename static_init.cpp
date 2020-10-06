#include <iostream>

using namespace std;

int init(){
	return 10;
}

int main(){
	static int i=init();
	cout<<i<<endl;
	return 0;
}
