#include<iostream>
#include<stdlib.h> //atoi
using namespace std;

int main(int argc, char** argv){
	assert(argc>1);
	int n = atoi(argv[1]);
	int count = 0;
	while(n){
		count++;
		n = n>>1;
	}
	cout<<count<<endl;
	
}
