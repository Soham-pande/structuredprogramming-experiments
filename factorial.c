#include <stdio.h>

// Recursive function
int factRec(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factRec(n - 1);
}

// Loop function
int factLoop(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial (recursive) = %d\n", factRec(n));
    printf("Factorial (loop) = %d\n", factLoop(n));

    return 0;
}
