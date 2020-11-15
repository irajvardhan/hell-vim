#include <iostream>
#include <vector>
#include <queue>
#include <map> 

using namespace std;

void display_vector(vector<int> v){
	
	vector<int>::iterator it;
	for (it = v.begin(); it!=v.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}


int main(){

	/*
	 * vector<int>
	 * */	
	vector<int> v;
	int n = 5;
	// initialize vector with size 5 and all 0s
	v.assign(n, 0);

	// Add a 5 to the vector [0 0 0 0 0 5]
	v.push_back(5);
	v.push_back(10);
	v.push_back(15);
		
	cout<<"vector has "<<v.size()<<" elements"<<endl;
	display_vector(v);
	
	int total=0;
	// pop all and take sum
	while(!v.empty()){
		total += v.back();
		v.pop_back(); // rtype is None
	}
	
	cout<<"sum of elements in vector is: "<<total<<endl;

	
	/*
	 * queue<int>
	 * */
	queue<int> q;
	
	cout<<"creating queue"<<endl;
	for (int i=0; i<5; i++){
		q.push(i);
	}
	
	cout<<"Popping elements from queue: ";
	while (!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	
	/*
	 * map
	 * */
	map<char, int> m;
	m['a'] = 1;
	m['b'] = 2;
	m['c'] = 3;

	map<char, int>::iterator it;
	
	it = m.find('b');
	if (it!=m.end()){
		m.erase(it);
	}

	cout<<"Showing map keys and values: "<<endl;
	for (it=m.begin();it!=m.end();it++){
		char key = it->first;
		int val = it->second;
		cout<<"m["<<key<<"] = "<<val<<endl;
	}
	

	return 0;

}
