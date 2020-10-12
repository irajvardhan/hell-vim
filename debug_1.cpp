#include <iostream>

using namespace std;


typedef struct Node{
	int val;
	struct Node* next;		
}Node;


Node* newNode(int v){
	Node* temp = new Node();
	temp->val = v;
	temp->next = NULL;
	return temp;
}


Node* createFibonaci(int n){
	if (n<=0)
		return NULL;
	
	Node* head = newNode(1);
	Node* prev = head;
	n -= 1;
	int a = 0;
	int b = 1;
	while (n>0){
		int c = a+b;
		Node* cur = newNode(a+b);
		prev->next = cur;
		prev = cur;	
		a = b;
		b = c;
		n--;
	}	
	return head;

}


void displayList(Node* head){
	Node* temp;
	temp = head;

	while (temp!=NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<endl;

}



int main(){

	int x  = 10;
	Node* head = createFibonaci(x);
	cout<<"Displaying fibonaci upto  "<<x<<" elements: "<<endl;
	displayList(head);
		
	return 0;
}
