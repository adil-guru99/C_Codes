#include<stdio.h>

void reverser(int arr[], int n);
void arrayPrinter(int arr[], int n);

int main() {
    int nums[] = {135, 225, 315, 405, 495};
    int size = sizeof(nums)/sizeof(nums[0]);
    printf("Before reversing:\n");
    arrayPrinter(nums, size);
    reverser(nums, size);
    printf("After reversing:\n");
    arrayPrinter(nums, size);
    return 0;
}

void reverser(int arr[], int n) {
    for (int i=0; i<n/2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}

void arrayPrinter(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
