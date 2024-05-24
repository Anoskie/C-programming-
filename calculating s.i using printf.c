//variables and data types in C
#include<stdio.h> 
int main (){

double P = 2000; // principal
double R = 7.5; // rate
double T = 4; // time

double interest = (P*R*T)/100 ;

printf("Interest is %0.2f ", interest);
return 0;
}
