#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void calculate_bmi() {
    float weight, height, bmi;
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
}

void simple_interest() {
    float principal, rate, time, interest;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest is: %.2f\n", interest);
}

void compound_interest() {
    float principal, rate, time, amount;
    int n;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter number of times interest applied per time period: ");
    scanf("%d", &n);
    amount = principal * pow((1 + rate / (n * 100)), n * time);
    printf("Compound Interest is: %.2f\n", amount - principal);
}

void calculator() {
    char operator;
    double num1, num2;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator\n");
    }
}

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter your birth year: ");
            int birth_year;
            scanf("%d", &birth_year);
            printf("Your age is: %d\n", 2023 - birth_year);
            break;
        case 2:
            printf("Enter a number to find its factorial: ");
            int num;
            scanf("%d", &num);
            printf("Factorial of %d is %d\n", num, factorial(num));
            break;
        case 3:
            printf("Enter a number to check if it is prime: ");
            scanf("%d", &num);
            if (is_prime(num))
                printf("%d is a prime number\n", num);
            else
                printf("%d is not a prime number\n", num);
            break;
        case 4:
            printf("Enter a number to check if it is odd or even: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("%d is even\n", num);
            else
                printf("%d is odd\n", num);
            break;
        case 5:
            calculate_bmi();
            break;
        case 6:
            simple_interest();
            break;
        case 7:
            compound_interest();
            break;
        case 8:
            calculator();
            break;
        case 9:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
