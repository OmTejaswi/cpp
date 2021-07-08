#include <stdio.h>
#include <conio.h>
#include <iostream>

int main()
{
    /* code */
    int num1, num2;
    std::cout << "Enter the first number: ";
    scanf("%i",&num1);
    std::cout << "Enter The second number: ";
    scanf("%i",&num2);
    std::cout << "Your Result Is: ";
    printf("%i",num1 + num2);
    return 0;
}