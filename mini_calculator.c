#include<stdio.h>
int main(){
    int num1, num2, choice;
    char again;

do{
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);

    printf("Choose operation to do?\n");
      printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulo\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        if(choice == 1)
            printf("Result: %d\n", num1 + num2);
        else if(choice == 2)
            printf("Result: %d\n", num1 - num2);
        else if(choice == 3)
            printf("Result: %d\n", num1 * num2);
        else if(choice == 4) {
            if(num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
             printf("Error: Division by zero!\n");
        }
         else if(choice == 5) {
            if(num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Division by zero!\n");
        }
        else
            printf("Invalid choice!\n");

    
        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &again);

        printf("\n-----------------------\n");

    }while(again == 'y' || again == 'Y');

    printf("Thank you for using the calculator!\n");
    return 0;
}
