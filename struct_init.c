#include "stdio.h"
 
int main()
{
 struct {int a[2];} arr[] = {{10,20},{30,40}};
 
 printf("%d %d %d %d\n",arr[0].a[0],arr[0].a[1],arr[1].a[0],arr[1].a[1]);

 int x[4] = {1};
 printf("%d %d %d %d\n",x[0],x[1],x[2],x[3]); 

 int y[4];
 printf("%d %d %d %d",y[0],y[1],y[2],y[3]); 



 return 0;
}
