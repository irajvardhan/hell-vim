#include <iostream>

using namespace std;

typedef struct Node{
	struct Node* next;
	int val;
}Node;


int size = 0;
Node* top;

void push(int val){
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

int pop(){
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
	
	push(10);
	push(20);
	push(30);
	cout<<pop()<<endl;
	push(40);
	cout<<pop()<<endl;
	cout<<pop()<<endl;
	cout<<pop()<<endl;
}
