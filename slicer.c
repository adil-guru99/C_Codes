#include<stdio.h>
#include<string.h>

void slice(char str[], int m, int n);

int main() {
    char string[15] = "Hello World";
    slice(string, 3, 7);
    return 0;
}

void slice(char str[], int m, int n) {
    for (int i=m; i<=n; i++) {
        printf("%c", str[i]);
    }
}
