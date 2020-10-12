#include<iostream>
#include<stack>

using namespace std;

typedef struct Node{
	struct Node* left;
	struct Node* right;
	int val;
}Node;	


Node* newNode(int v){
	Node* temp = new Node();
	temp->val = v;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void recur(Node* root){
	if (root == NULL)
		return;
	recur(root->left);
	cout<<root->val<<" ";
	recur(root->right);
}

void inorder(Node* root){
	
	stack<Node*> s;

	Node* cur = root;

	while(cur!=NULL or !s.empty()){
		while(cur!=NULL){
			s.push(cur);
			cur = cur->left;
		}

		//something must be on stack now
		cur = s.top();
		s.pop();

		cout<<cur->val<<" ";

		cur = cur->right;
	}
}

int main(){
	Node* root = newNode(6);
	root->left = newNode(2);
	root->right = newNode(7);
	root->left->left = newNode(1);
	root->right->right = newNode(8);
	root->left->right = newNode(4);
	root->left->right->left = newNode(3);
	root->left->right->right = newNode(5);
	
	// iterative inorder traversal
	inorder(root);
	
	cout<<endl;

	// recursive inorder traversal
	recur(root);
	
	cout<<endl;

	return 0;
}
