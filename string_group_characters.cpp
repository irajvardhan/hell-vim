#include <iostream>
#include <string>
using namespace std;

// Remove spaces and dashes, and then group characters into groups of 3.
string group(string s1){
	string s2 = "";
	int group_size = 0;
	int group_thresh = 3;
	for (int i=0; i<s1.length(); i++){
		if (s1[i]!=' ' and s1[i] != '-'){
			if (group_size == group_thresh){
				s2 = s2 + " ";
				group_size = 0;
			}
			s2 = s2 + s1[i];
			group_size++;
		
		}
	}
	return s2;
}


int main(){
	string s1 = "a739 -hello world";
	cout<<"Original string: "<<s1<<endl;
	string s2 = group(s1);
	cout<<"Grouped string: "<<s2<<endl;
	return 0;
}
