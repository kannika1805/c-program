#include<stdio.h>
void main(){
  int a = 1;
  int b = 2;
  printf("before swap a ,b is %d,%d",a,b);
  {
    a = a + b; //a=1+2=3
    b = a - b ;//b=3-2=1
    a = a - b ;//a=3-1=2
  }
  printf("\nafter Swap a ,b is %d,%d",a,b);
}
