#include <iostream>

using namespace std;

typedef struct Node{
	struct Node* next;
	int val;
}Node;

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
	temp = new Node();
	temp->val = val;
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
	
	/*
	 *We dont need to return a pointer to this object of class Stack so we dont need to create it using new keyword.
	 This object lives on the stack portion of the memory.
	 * */
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
