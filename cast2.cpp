#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	char *c = (char*)&a;
	if (*c)
		cout<<"Little Endian";
	else
		cout<<"Big Endian";
	
	cout<<endl;

	for(int i=0;i<4;i++){
		// Overall output 1 0 0 0
		cout<<(int)*(c+i)<<endl;
	}
	return 0;
	
}
