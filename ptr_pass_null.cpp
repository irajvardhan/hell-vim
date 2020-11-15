#include <iostream>

using namespace std;

typedef struct Node{
	int val;
	struct Node* next;
}Node;


void foo(Node** head){
	if(*head == NULL){
		cout<<"the passed pointer is NULL"<<endl;
	} else{
		cout<<"the passed pointer is not NULL. It may or may not have been initialized."<<endl;
	}
}

int main(){
		
	Node* head1 = NULL;
	// prints pointer is NULL
	foo(&head1);
	

	Node* head2;
	// head2 does NOT become NULL implicitly.
	// TRICKY: head2 may be anything. So the result is not deterministic. It can print either case.
	foo(&head2);

	// prints pointer is NULL
	static Node* head3;
	foo(&head3);
	
	return 0;

}
