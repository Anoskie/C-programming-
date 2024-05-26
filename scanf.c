//variables and data types in C
#include<stdio.h> 
int main (){

int age; //%d
float salary; //%f
double budget; // %lf
char a; //%c

printf("Enter the values of age: ");
scanf("%d, &age");

printf("Enter value of salary: ");
scanf("%f, &salary");

printf("Enter value of budget: ");
scanf("%lf, &budget");

printf("Enter value of character: ");
scanf("%c, &a");

printf("The value of age is %d \n, age");
printf("The value of salary is %10.2f \n, salary");
printf("The value of budget is %.2lf \n, budget");
printf("The value of a is %c \n, a");

return 0;
}
