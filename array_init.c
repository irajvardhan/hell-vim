#include<stdio.h>

int main(){
	int arraya2D[2][4] = {1,2,3,4,5,6,7,8}; /* (i) */
	int arrayb2D[][4] = {1,2,3,4,5,6,7,8}; /* (ii) */
	
	// below three give compile error
	int arrayc2D[2][] = {1,2,3,4,5,6,7,8}; /* (iii) */
	int arrayd2D[][] = {1,2,3,4,5,6,7,8}; /* (iv) */
	int arrayde2D[][] = {{1,2,3,4},{5,6,7,8}}; /* (v) */


	return 0;
}
