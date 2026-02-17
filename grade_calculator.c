#include<stdio.h>
int main(){
    char name[50];
    float eng, maths, hindi, science, computer;
    float total, percentage;

    printf("Enter student name:");
    scanf("%s", name);

    printf("Enter English marks (out of 100):");
    scanf("%f",&eng);

    printf("Enter Maths marks (out of 100):");
    scanf("%f",&maths);

    printf("Enter Hindi marks (out of 100):");
    scanf("%f", &hindi);

 printf("Enter science marks (out of 100):");
    scanf("%f", &science);

     printf("Enter Computer marks (out of 100):");
    scanf("%f",&computer);
   
        total = eng + maths + hindi + science + computer;
    percentage = total / 5;


printf("\n---------RESULT---------------\n");
printf("Name: %s/n", name);
printf("Total marks: %.2f / 500\n", total);
printf("percentage: %.2f%%\n", percentage);

if(percentage>=90){
    printf("Grrade:A\n");
}
else if(percentage>=75){
    printf("Grrade:B\n");
}
else if(percentage>=50){
    printf("Grrade:C\n");
}
else{
    printf("fail\n");
}
return 0;
}