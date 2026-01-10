#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    int choice;
    int side;
    float radius, area;
    printf("what do you want? area of square, radius of circle");
    printf("write 1 for area of square");
    printf("write 2 for area of circle");
    scanf("%d",&choice);

   if (choice == 1) {
        printf("Enter side of square: ");
        scanf("%d", &side);

        area = side * side;
        printf("Area of square is: %.2f\n", area);
    }
    else if(choice==2){
        printf("enter radius");
        scanf("%f", &radius);
        printf("area is : %f", 3.14*radius*radius);
    }
    else{
        printf( " choice is not valid");
    }
return 0;
}