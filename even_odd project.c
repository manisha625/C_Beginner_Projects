#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    int num;
 printf("write a number to see if its even or odd\n");
 scanf("%d", &num);
 if( num % 2 == 0){
    printf("the number is even");
 } 
 else{
    printf("the number is odd");
 }
 return 0;
}
