#include<stdio.h>

void lengthPrinter(char str[]);

int main() {
    char string[100];
    printf("Enter a string: ");
    fgets(string, 100, stdin);
    printf("The string you entered: ");
    puts(string);

    lengthPrinter(string);

    return 0;
}

void lengthPrinter(char str[]) {
    int length = 0;
    for(int i=0; str[i] != '\0'; i++) {
        length++;
    }

    printf("The length of your string is: %d", length-1);
}
