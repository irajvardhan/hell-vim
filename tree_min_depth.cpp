#include<iostream>
#include<math.h>

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

int min_depth(Node* root){
	if(root == NULL)
		return 0;
	else if(root->right == NULL)
		return 1 + min_depth(root->left);
	else if(root->left == NULL)
		return 1 + min_depth(root->right);
	else
		return 1 + min(min_depth(root->left), min_depth(root->right));
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
	
	int d = min_depth(root);
	cout<<"min depth of first tree is: "<<d<<endl;
	
	Node* root2 = newNode(1);
	root2->left = newNode(2);
	root2->left->right = newNode(3);

	int d2 = min_depth(root2);
	cout<<"min depth of second tree is: "<<d2<<endl;
	
	return 0;
}
