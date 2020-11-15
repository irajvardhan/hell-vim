#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void flip_case(char* s){
	int l = strlen(s);
	for(int i=0;i<l;i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i] -= 'a'-'A';
		}else if(s[i]>='A' && s[i]<='Z'){
			s[i] += 'a' - 'A';
		}
	}
}

int main(){
	char s[] = "HellO";
	//char* s = "HellO"; // NOTE: we cant do this because in this way, the string becomes READ-ONLY
	printf("%s\n",s);
	flip_case(s);
	printf("%s\n",s);

}

