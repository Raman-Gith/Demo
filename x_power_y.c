#include<stdio.h>
#include<math.h>

int main()
{
  int x,y;
  printf("Enter the value of x and y :");
  scanf("%d %d",&x,&y);
  
  int result = pow(x,y);
  
  printf("\nx power y is %d ",result);
  
  return 0;
}   
