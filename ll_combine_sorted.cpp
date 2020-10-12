#include <iostream>
#include <map>
using namespace std;

typedef struct Node{
	int val;
	struct Node* next;
}Node;

Node* newNode(int val){
	Node* temp = new Node();
	temp->val = val;
	temp->next = NULL;
	return temp;
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

Node* merge(Node* p1, Node* p2){
	if (p1 == NULL)
		return p2;
	else if (p2 == NULL)
		return p1;

	if (p1->val < p2->val){
		p1->next = merge(p1->next, p2);
		return p1;
	}
	else{
		p2->next = merge(p1, p2->next);
		return p2;
	}
}


Node* combineLists(Node* p1, Node* p2){
	Node* head;
	
	if (p1 == NULL)
		return p2;
	else if (p2 == NULL)
		return p1;
	
	if (p1->val < p2->val)
		head = p1;
	else
		head = p2;	

	while (p1!=NULL and p2!=NULL){
		if (p1->next != NULL and p1->next->val < p2->val){
			p1 = p1->next;
		}
		else if (p1->val < p2->val){
			Node* temp = p1->next;
		        p1->next = p2;
			p1 = temp;	
		}
		else if (p2->next != NULL and p2->next->val < p1->val){
			p2 = p2->next;
		}
		else{
			Node* temp = p2->next;
			p2->next = p1;
			p2 = temp;
		}
	}

	return head;
}

int main(){
	Node *head1, *head2;
	// [1 2 7 9 15 20 30 40]
	head1 = newNode(1);
	head1->next = newNode(2);
	head1->next->next = newNode(7);
	head1->next->next->next = newNode(9);
	head1->next->next->next->next = newNode(15);
	head1->next->next->next->next->next = newNode(20);	
	head1->next->next->next->next->next->next = newNode(30);
	head1->next->next->next->next->next->next->next = newNode(40);

	head2 = newNode(3);
	head2->next = newNode(4);
	head2->next->next = newNode(5);
	head2->next->next->next = newNode(8);

	cout<<"The original lists are"<<endl;
	displayList(head1);
	displayList(head2);

	// Iterative approach
	//Node* head = combineLists(head1, head2);
	
	// Recursive approach
	Node* head = merge(head1, head2);
	cout<<"The list after mergins is"<<endl;
	displayList(head);	
	return 0;
}
