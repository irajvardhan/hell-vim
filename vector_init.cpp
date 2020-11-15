#include<iostream>
#include<vector>

using namespace std;

int main(){
	int size = 10;
	vector<int> ans(size);
	fill(ans.begin(),ans.end(),0);

	for(int i=0;i<size;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	
	//-------------------x--------------
	
	vector<int> vec;
	int capacity = 10;
	vec.assign(capacity, 1);
	for(int i=0; i<capacity; i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;		
	return 0;

}
