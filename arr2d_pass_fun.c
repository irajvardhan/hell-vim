#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 3

// option 1
void print(int arr[M][N]) //M not required, but N is 
{ 
    int i, j; 
    for (i = 0; i < M; i++) 
      for (j = 0; j < N; j++) 
        printf("%d ", arr[i][j]); 
} 
 
// option 2
void print2(int** arr, int r, int c) 
{ 
    int i, j; 
    for (i = 0; i < r; i++) 
      for (j = 0; j < c; j++) 
        printf("%d ", arr[i][j]); 
} 
 
int main() 
{ 
	// option 1
	int arr[M][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	print(arr);

	// option 2
	int r = 3;
	int c = 3;
	int** arr2;
	arr2 = (int**)malloc(r*sizeof(int*));
	for(int i=0;i<r;i++){
		arr2[i] = (int*)malloc(c*sizeof(int));
	}
	printf("\n");

	int count=0;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			arr2[i][j] = ++count;
	print2(arr2,r,c);

	printf("\n");

    return 0; 
}

