#include<iostream>

using namespace std;

typedef struct Node{
	int val;
	struct Node* next;
}Node;

void foo(Node** head){
	if (*head == NULL)
		cout<<"case 1";
	else
		cout<<"case 2";
}

int main(){
	Node *head1;
	foo(&head1);
	return 0;
}
