#include <stdio.h>
#include <conio.h>
#include <typeinfo>
#include <iostream>
int main()
{
    float price1;
    float price2;
    char op;
    float result;

    printf("Enter The First Price: ");
    scanf("%f", &price1);
    //    std::cout << typeid(num1).name();

    printf("Enter The Operation You Want To Preform ( +, -, *, / ): ");
    scanf(" %c", &op);

    printf("Enter The Second: ");
    scanf("%f", &price2);

    switch (op)
    {
    case '+':
        result = price1 + price2;
        std::cout << result;
        // printf(typeid(op).name());
        break;
    case '-':
        result = price1 - price2;
        std::cout << result;
        break;
    case '*':
        result = price1 * price2;
        std::cout << result;
        break;
    case '/':
        result = price1 / price2;
        std::cout << result;
        break;

    default:
        printf("The operator is not valid");
        break;
    }
}