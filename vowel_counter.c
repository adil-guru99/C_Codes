#include<stdio.h>
#include<string.h>

int vowel_counter(char str[50]);

int main() {
    char string[50];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    printf("This string contains %d vowels\n", vowel_counter(string));
    return 0;
}

int vowel_counter(char str[50]) {
    int count = 0;
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}
