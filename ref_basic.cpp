#include<iostream>

using namespace std;

int main(){
	int x = 10;
	int& r = x;

	cout<<"x: "<<x<<endl;
	cout<<"r: "<<r<<endl;

	x = 20;
	
	cout<<"x: "<<x<<endl;
	cout<<"r: "<<r<<endl;
	
	return 0;


}
