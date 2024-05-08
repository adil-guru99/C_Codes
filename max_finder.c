//Program to find the maximum of two numbers using pointers

#include<stdio.h>

int max_finder(int *x, int *y);

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("The maximum of the two numbers is: %d", max_finder(&num1, &num2));
    return 0;
}

int max_finder(int *x, int *y) {
    if (*x > *y) {
        return *x;
    }
    else if (*x < *y) {
        return *y;
    }
}
