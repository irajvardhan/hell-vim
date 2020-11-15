#include<iostream>
using namespace std;

int main(){
	int x = 1;
	char* c = (char*)&x;

	int first_byte = (int)(*c);
	if(first_byte == 1)
		cout<<"little endian";
	else
		cout<<"big endian";
	
	return 0;

}
