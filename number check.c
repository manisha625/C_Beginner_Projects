#include<stdio.h>
int main(){
    int check;
    printf("enter the number to check:");
    scanf("%d", &check);

if(check==0){
    printf("the number is zero value");
}
else if(check >0){
    printf("the number is positive value");
}
 else if(check<0){
    printf("the number is negative value");
 }
 else{
    printf("not defined");
 }
 return 0;
}