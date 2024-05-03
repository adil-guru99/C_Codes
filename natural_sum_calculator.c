#include<stdio.h>

int sum_func(int n);

int main() {
    int n;
    printf("Till what number do you want the sum?: ");
    scanf("%d", &n);

    int n_sum = sum_func(n);

    printf("The sum of the first %d numbers is %d", n, n_sum);
    return 0;
}

int sum_func(int n) {
    if (n == 1) { 
        return 1; // base case
    } else {
        return n + sum_func(n-1); // recursive call
    }
}
