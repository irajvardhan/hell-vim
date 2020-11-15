#include<iostream>
#include<stack>

using namespace std;


class queue{
	stack<int> s1;
	stack<int> s2;
	int size;

public:
	queue(){
		size = 0;
	}
	
	void enqueue(int);
	int dequeue();
	bool isEmpty();

};

void queue::enqueue(int x){
	cout<<"enqueue("<<x<<")"<<endl;
	while(!s1.empty()){
		s2.push(s1.top());
		s1.pop();
	}
	s2.push(x);

	while(!s2.empty()){
		s1.push(s2.top());
		s2.pop();
	}
	size++;
}

int queue::dequeue(){
	if(size == 0)
		return -1;
	int ans = s1.top();
	s1.pop();
	size--;
	return ans;
}

bool queue::isEmpty(){
	if(size==0)
		return true;
	else
		return false;
}

int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout<<q.dequeue()<<endl;
	q.enqueue(4);
	q.enqueue(5);
	while(!q.isEmpty())
		cout<<q.dequeue()<<endl;
	return 0;
}
