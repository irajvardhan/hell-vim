#include<stdio.h>
#include<stdlib.h>
#include<string.h> //strlen

int main(){

	// one extra space needed for '\0'
	char s[4] = "Abc"; 
	printf("%s\n",s);	

	// if static/global it will be in data segment
	char s1[] = "this is on stack";
	printf("%s\n",s1);

	char s2[] = {'o','n',' ','s','t','a','c','k','\0'};
	printf("%s\n",s2);

	int arr[] = {1,2,3,4};
	int* p = arr;
	printf("sizeof(arr): %lu\n",sizeof(arr)); // will print size of array = 16bytes
	printf("sizeof(p): %lu\n",sizeof(p)); // will print size of pointer = 8bytes

	// this is on read-only part of shared segment (data segment)
	char* s3 = "cant change this";
	printf("%s\n",s3);
	printf("sizeof(s3): %lu\n",sizeof(s3)); // will print size of pointer = 8bytes
	printf("strlen(s3): %lu\n",strlen(s3)); //will not include '\0' in the length
	//s3[0] = 'a'; // illegal

	// this is on heap
	char* s4 = (char*)malloc(11*sizeof(char));
	*(s4+0) = 'c';
	*(s4+1) = 'a';
	*(s4+2) = 'n';
	*(s4+3) = ' ';
	*(s4+4) = 'c';
	*(s4+5) = 'h';
	*(s4+6) = 'a';
	*(s4+7) = 'n';
	*(s4+8) = 'g';
	*(s4+9) = 'e';
	*(s4+10) = '\0';

	printf("%s\n",s4);

	*(s4+2) = 'b';
	printf("%s\n",s4);	
	
	// like any pointer to array of elements we can do the following
	s4[0] = 'a';
	printf("%s\n",s4);
		
	return 0;	



}
