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

// Reomve all occurenes of x in the link list
Node* removeAll(Node* head, int x){
	Node* dummy = newNode(-1);
	dummy->next = head;

	Node* prev = dummy;
	Node* cur = dummy->next;

	while (cur!=NULL){
		if (cur->val == x){
			Node* temp = cur;
			prev->next = cur->next;
			cur = cur->next;
			delete temp;
		}
		else{
			prev = cur;
			cur = cur->next;
		}

	}

	// head may have changed if originally head was pointing to a node with value as x
	head = dummy->next;

	// we no longer need the dummy node
	delete dummy;

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
	Node* head;
	// [4 1 1 3 1 2 3 2]
	head = newNode(1);
	head->next = newNode(1);
	head->next->next = newNode(1);
	head->next->next->next = newNode(3);
	head->next->next->next->next = newNode(1);
	head->next->next->next->next->next = newNode(2);
	head->next->next->next->next->next->next = newNode(3);
	head->next->next->next->next->next->next->next = newNode(2);

	cout<<"The original list is"<<endl;
	displayList(head);

	int x = 1;

	head = removeAll(head,x);
	cout<<"The list after removing all occurenes of "<<x<<" is"<<endl;
	displayList(head);
	return 0;
}
