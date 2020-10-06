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

void removeDuplicates(Node* head){
	if (head == NULL)
		return;
	Node *ptr1, *ptr2;

	ptr1 = head;
	
	// Note: ptr1 may become NULL if all nodes on the right are deleted.
	while (ptr1!=NULL and ptr1->next!=NULL){
		//cout<<ptr1->val<<endl;
		ptr2 = ptr1;

		// ptr2 is guaranteed to be valid because we know ptr1 is valid
		// and we dont move ptr2 unless we find a non-duplicate node.
		while (ptr2->next != NULL){
			if (ptr1->val == ptr2->next->val){
				Node* temp = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete temp;
			}
			else{
				ptr2 = ptr2->next;
			}
		}
		ptr1 = ptr1->next;
	}
}


void removeDuplicatesWithMap(Node* head){
	if (head == NULL)
		return;
	
	Node *prev, *cur;
	prev = head;
	cur = head->next;
	
	map<int, int> mymap;
	mymap[head->val]=1;
	
	while (cur!=NULL){
		if (mymap.find(cur->val) == mymap.end()){
			// Number has not been seen before
			mymap[cur->val] = 1;
			prev = cur;
			cur = cur->next;
		}	
		else{
			// Duplicate found
			Node* temp;
		        temp = cur;
			cur = cur->next;
			prev->next = cur;
			delete temp;
		}
	}	

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
	head = newNode(4);
	head->next = newNode(1);
	head->next->next = newNode(1);
	head->next->next->next = newNode(3);
	head->next->next->next->next = newNode(1);
	head->next->next->next->next->next = newNode(2);	
	head->next->next->next->next->next->next = newNode(3);
	head->next->next->next->next->next->next->next = newNode(2);

	cout<<"The original list is"<<endl;
	displayList(head);
	removeDuplicates(head);
	cout<<"The list after removing duplicates is"<<endl;
	displayList(head);	
	return 0;
}
