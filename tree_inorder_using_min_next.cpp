#include<iostream>
using namespace std;

typedef struct Node{
	struct Node* left;
	struct Node* right;
	int val;
}Node;


Node* newNode(int val){
	Node* node = new Node();
       	node->left = NULL;
	node->right = NULL;
	node->val = val;
	return node;
}

// returns min value node in BST
Node* findMin(Node* root){
	if (root == NULL)
		return root;

	if (root->left == NULL)
		return root;
	
	return findMin(root->left);
}

// returns value of inorder successor node of the input node n 
// root: root of BST
// n: input node for which we need to find the next node
Node* findNext(Node* root, Node* n){
	if (n == NULL)
		return NULL;
	
	if (n->right)
		return findMin(n->right);
	
	// start from the root
	Node* cur = root;
	Node* succ = NULL;
	while(cur!=NULL){
		if (cur->val > n->val){
			succ = cur;
			cur = cur->left;
		}else{
			cur = cur->right;
		}
	}	
	return succ;
	
}

// inorder implementation using findMin and findNext
void inorder(Node* root){

	if (root == NULL)
		return;

	Node* cur = findMin(root);
	while(cur!=NULL){
		cout<<cur->val<<" "<<endl;
		cur = findNext(root,cur);
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
	inorder(root);
	return 0;
}

