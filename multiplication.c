#include <stdio.h>

int multiply(int *arr, int n) {
    int i, mul = 1;
    for (i = 0; i < n; i++) mul *= *(arr + i);  // using pointer
    return mul;
}

int main() {
    int a[5], i;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++) scanf("%d",&a[i]);

    printf("Multiplication = %d\n", multiply(a, 5));
    return 0;
}
