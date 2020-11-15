#include<iostream>
#include<stack>

using namespace std;

/*
 * This question is a varition of tree_inorder_using_min_and_next.cpp
 * Here the findNext() call does not require any argument.
 * It is derived from the LC question 173.
 * */


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

stack<Node*> left_nodes;

void store_left_nodes(Node* root){
	while(root!=NULL){
		left_nodes.push(root);
		root = root->left;
	}
}

// returns min value node in BST
Node* findMin(Node* root){
	if (root == NULL)
		return NULL;

	while (root->left != NULL){
		left_nodes.push(root);
		root = root->left;
	}		
	return root;
}

Node* findNext(){
	if(left_nodes.empty())
		return NULL;

	Node* node = left_nodes.top();
	left_nodes.pop();

	if(node->right){
		store_left_nodes(node->right);
	}
	return node;
}

// inorder implementation using findMin and findNext
void inorder(Node* root){

	if (root == NULL)
		return;

	Node* cur = findMin(root);
	store_left_nodes(cur->right);
	while(cur!=NULL){
		cout<<cur->val<<" "<<endl;
		cur = findNext();
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

