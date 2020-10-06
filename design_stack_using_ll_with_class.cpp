#include <iostream>

using namespace std;

class Node{
	public:
		Node* next;
		int val;
		
		Node(){
			val = -1;
			next = NULL;
		}

		Node(int _val){
			val = _val;
			next = NULL;
		}
		
};

class Stack{
	public:
		int size;
		Node* top;
		
		Stack(){
			size = 0;
			top = NULL;
		}

		void push(int val);
		int pop();
	
};

void Stack::push(int val){
	Node* temp;
	temp = new Node(val);
	if (top == NULL){
		top = temp;
	}
	else{
		temp->next = top;
		top = temp;		
	}

	size = size + 1;

}

int Stack::pop(){
	if (size == 0)
		return -1;
	
	int val;
       
	val = top->val;	
	top = top->next;
	size -= 1;

	return val;

}

int main(){
	// driver
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop()<<endl;
	s.push(40);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
}
