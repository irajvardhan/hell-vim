#include <iostream>
#include <map>
using namespace std;

typedef struct Node{
	int val;
	struct Node* next;
}Node;

Node* newNode(int val){
	try{
		Node* temp = new Node();
		temp->val = val;
		temp->next = NULL;
		return temp;
	}
	catch(bad_alloc){
		// Process ends with error
		cout<<"Memory allocation failed"<<endl;
		exit(1);

		// Or you can do
		//return NULL;
	}
}


void reverseUtil(Node** head, Node* cur){
	// Last node
	if (cur->next == NULL){
		// We reached last node. Update the head.
		*head = cur;
		return;
	}
	else{
		reverseUtil(head, cur->next);
		cur->next->next = cur;
		cur->next = NULL;
		return;
	}
}

// takes reference to the head of the link list
void reverse(Node** head){
	if (*head == NULL)
		return;
	
	Node* cur = *head;
	reverseUtil(head, cur); 
	
}


void reverseIterative(Node** head){
	// Note: *head->next is invalid code.
	if (*head == NULL or (*head)->next==NULL)
		return;

	Node* prev = NULL;
	Node* cur = *head;

	while (cur!=NULL){
		Node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}
	
	// Update where head points, as now the last node becomes the first node
	*head = prev;

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
	Node* head;
	// [4 1 1 3 1 2 3 2]
	head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);
	head->next->next->next->next->next = newNode(6);	
	head->next->next->next->next->next->next = newNode(7);
	head->next->next->next->next->next->next->next = newNode(8);

	cout<<"The original list is"<<endl;
	displayList(head);
	
	reverse(&head);
	cout<<"The list after reversing using recursive method is "<<endl;
	displayList(head);	

 	reverseIterative(&head);
	cout<<"The list after reversing again using iterative method is "<<endl;
	displayList(head);	
	
	return 0;
}
