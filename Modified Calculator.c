#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
