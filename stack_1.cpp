#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
	stack<char> mystack;
	
	string s = "apple";
	cout<<"s: "<<s<<endl;
	cout<<"s.length() = "<<s.length()<<endl;
	cout<<"s.size() = "<<s.size()<<endl;
	cout<<"sizeof(s) = "<<sizeof(s)<<endl;
	
	for (int i=0;i<20;i++){
		s += "z";
	}
	cout<<"s: "<<s<<endl;
	cout<<"s.length() = "<<s.length()<<endl;
	cout<<"sizeof(s) = "<<sizeof(s)<<endl;
	

	int base = int(s[0]);
	
	// push characters a to j on stack
	for (int i=0;i<10;i++){
		char c = char(base+i);
		mystack.push(c);
	}	
	
	while (!mystack.empty()){
		cout<<mystack.top()<<" ";
		mystack.pop();
	}


	return 0;
}
