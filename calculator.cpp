#include <stdio.h>
#include <conio.h>
#include <typeinfo>
#include <iostream>
int main() {
   float num1;
   float num2;
   char op;
   float result;

   printf("Enter the first number: ");
   scanf("%f",&num1);
//    std::cout << typeid(num1).name();
   
   printf("Enter the operation you want to preform (+, -, *, /): ");
   scanf(" %c",&op);

   printf("Enter the second number: ");
   scanf("%f",&num2);

    switch (op)
    {
    case '+':
    result = num1 + num2;
    printf("%f",result);
    // printf(typeid(op).name());
    break;
    case '-':
    result = num1 - num2;
    printf("%f",result);
    break;
    case '*':
    result = num1 * num2;
    printf("%f",result);
    break;
    case '/':
    result = num1/num2;
    printf("%f",result);
    break;
    
    default:
    printf("The operator is not valid");
        break;
    }
}