#include<stdio.h>
#include<time.h>
int main(){
	clock_t begin = clock();

	/* here, do your time-consuming job */
	for(int i=0;i<100000000;i++){
		int x = 100;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time elapsed: %f seconds", time_spent);
	return 0;
}
