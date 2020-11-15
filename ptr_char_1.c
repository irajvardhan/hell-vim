#include<stdio.h>
#include<stdlib.h>

int main(){
	char *s[] = { "knowledge","is","power"}; 
  	char **p; 
  	p = s; 
  	printf("%s ", ++*p); 
	//printf("%s ", *p++); 
  	printf("%s ", ++*p);
	printf("%s ", ++*p);
	//printf("%s ", *s);	
	return 0;
}
