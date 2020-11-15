#include<iostream>
#include<queue> //priority_queue
#include<utility> //pair

using namespace std;

class Stack{
	priority_queue<pair<int,int> > pq;
	int count;

public:
	void push(int);
	void pop();
	int top();
	bool isEmpty();
};


void Stack::push(int x){
	count++;
	pair<int, int> p;
	p = make_pair(count, x);
	pq.push(p);
}

void Stack::pop(){
	if(pq.empty()){
		cout<<"nothing to pop"<<endl;
		return;
	}
	pq.pop();
	count--;
}

int Stack::top(){
	if(pq.empty())
		return -1;
	pair<int,int> p;
	p = pq.top();
	return p.second;
}

bool Stack::isEmpty(){
	return pq.empty();
}


int main(){
	Stack s;
	s.push(10);
	s.push(90);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(80);
	
	 while(!s.isEmpty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	
	return 0;
}
