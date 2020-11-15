#include<stdlib.h>
#include<stdio.h>

typedef struct Node{
	int arr[0];
}Node;

int main(){
	printf("size: %lu\n",sizeof(Node));
	Node* temp = (Node*)malloc(sizeof(Node));
	printf("size of *temp: %lu\n",sizeof(*temp));
	return 0;
}
