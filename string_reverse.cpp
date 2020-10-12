#include <iostream>

using namespace std;

void reverse(string& s){
	int n = s.length();

	for(int i=0;i<n/2;i++){
		swap(s[i], s[n-1-i]);
	}
}

int main(){
	string s = "abcde";
	
	cout<<s<<endl;
	reverse(s);
	cout<<s<<endl;
	return 0;

}
