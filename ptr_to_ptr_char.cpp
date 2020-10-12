#include<iostream>

using namespace std;

void foo(char** str_ref){
	(*str_ref)++;

	cout<<"value after increment in foo: "<<**str_ref<<endl;
}

int main(){
	
	char* s = "Hello World";
	foo(&s);
	cout<<"s in main: "<<s<<endl;

	return 0;
}
