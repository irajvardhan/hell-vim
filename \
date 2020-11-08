#include<iostream>

using namespace std;
// confusing
int main(){
	char *s[] = { "knowledge","is","power"}; 
  	char **p; 
  	p = s; 
	cout<<p<<endl; //prints an address
	cout<<s[1]<<endl; //prints "is"
  	cout<<p[1]<<endl; //prints "is"	

	// ++*p evaluated as ++(*p) and *p is pointer to a single string so ++ moves it by one character
	cout<<++*p<<endl; // prints "nowledge" [s chages as well] 	
  	cout<<++*p<<endl; // prints "owledge" [s changes as well]
	
	// *p++ evaluated as *(p++) and p moves to next string because s is an array of pointers
	cout<<*p++<<endl; // prints "owledge" [p moves to "is"] 
	cout<<*p++<<endl; // prints "is" [p moves to "power"]
	cout<<*p++<<endl; // prints "power"
	return 0;
}
