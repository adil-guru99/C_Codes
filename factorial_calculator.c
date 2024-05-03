#include<stdio.h>

int factorial_calculator(int n);

int main() {

    int num;
    printf("Of what number do you want the factorial of?: ");
    scanf("%d", &num);

    int factorial = factorial_calculator(num);

    printf("The factorial of %d is %d", num, factorial);

    return 0;
}

int factorial_calculator(int n) {
    if (n == 1) {
        return 1; // base case
    } else {
        return n * factorial_calculator(n-1); // recursive call
    }
}
