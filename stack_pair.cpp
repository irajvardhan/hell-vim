#include<iostream>
#include<stack>
#include<utility> //pair, make_pair
using namespace std;

int main(){
	stack<pair<int, int> > s;

	s.push(make_pair(1, 10));
	s.push(make_pair(2, 20));
	pair<int, int> p;
	while(!s.empty()){
		p = s.top();
		s.pop();
		cout<<p.first<<","<<p.second<<endl;
	}
	return 0;
}
