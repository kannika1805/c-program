#include<stdio.h>
void main(){
 int num;
 printf("enter the number:");
 scanf("%d",&num);
 if(num > 0) 
 {
    printf("the number %d is positive",num);
 }
 else if(num <0)
 {
    printf("the number %d is negative",num);
 }
 else {
   printf("the number is zero");
 }
}
