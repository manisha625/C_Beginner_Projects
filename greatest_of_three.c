 #include<stdio.h>
 int main(){
    int a, b, c;
    printf("enter three numbers to know greatest of all:\n");
    scanf("%d %d %d", &a, &b, &c);
     if( a > b && a > c){
        printf("greatest number is: %d\n",a);
     }
      else if(b>a && b> c){
        printf("greater number is: %d\n", b);
      }
      else if( c>a && c>b){
        printf("greater number is: %d\n", c);
      }
      else{
        printf("undefined\n");
      }
      return 0;
 }