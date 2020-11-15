#include<stdio.h> 
#include<stdlib.h> 
  
int main() 
{ 
    int r=3, c=4, len=0; 
    int *ptr, **arr; 
    int count = 0,i,j; 
  
    len = sizeof(int *) * r + sizeof(int) * c * r; 
    arr = (int **)malloc(len); 
  	
    /*
     * arr <=> |  r int* (pointers) |     r*c int (elements)        |
     */

    // ptr is now pointing to the first element of 2D array 
    ptr = (int *)(arr + r); 
    
    // below line shows that arr moves in 8byte increments (size of ptr), and ptr will move in 4byte increments (size of int)
    //printf("ptr: %x ptr+1: %x arr+r: %x arr+r+1: %x",ptr,ptr+1,arr+r,arr+r+1);

    // we now assign pointers for each row
    for(i = 0; i < r; i++) 
        arr[i] = (ptr + c * i); 
  
    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) 
            arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count 
  
    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) 
            printf("%d ", arr[i][j]); 

     printf("\n Addresses: \n"); 
     for(i=0;i<(r+r*c);i++)
	    printf("%x ",(arr+i));
    
    printf("\n");

    return 0; 
} 
