#include<stdlib.h>
#include<stdio.h>

typedef struct Node{
	// statis is not allowed in struct
	static int x; //error
	int y;
}Node;

int main(){
	Node* temp = (Node*)malloc(sizeof(Node));
	return 0;
}
