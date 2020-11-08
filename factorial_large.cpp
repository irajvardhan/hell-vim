#include<iostream>
#include<stdlib.h>
#include<vector>
#define MAX 500

using namespace std;

void factorial_large(int x){
	vector<int> res;
	res.push_back(1);
	
	// multiply res by 2*3*4*5.....*x
	for(int num=2;num<=x;num++){
		// multiply the number represented by res with num
		int carry = 0;
		for(int i=0;i<res.size();i++){
			int prod = res[i]*num + carry;
			res[i] = prod%10;
			carry = prod/10;
		}

		// add leftover carry to res
		// ALERT: this can comprise of more than 1 digit and needs to be appended in reverse order
		while (carry > 0){
			int d = carry%10;
			carry = carry/10;
			res.push_back(d);
		}		
	}

	cout<<"factorial of "<<x<<" is: ";
	for(int i=res.size()-1;i>=0;i--){
		cout<<res[i];
	}
	cout<<endl;

}

int main(int argc, char** argv){
	assert(argc>1);

	int x = atoi(argv[1]);
	factorial_large(x);
	return 0;

}
