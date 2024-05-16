#include<stdio.h>

int main() { // Program to print all the odd numbers from 1 to n in a file

    int n;
    printf("Till what number do you want to print: ");
    scanf("%d", &n);

    FILE *fptr;
    fptr = fopen("test.txt", "w");
    for (int i=1; i<=n; i+=2) {
        fprintf(fptr, "%d\n", i);
    }
    fclose(fptr);

    return 0;
}
