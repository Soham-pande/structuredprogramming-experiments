#include <stdio.h>

// Call by value (no effect outside)
void swapValue(int x, int y) {
    int t = x; x = y; y = t;
    printf("Inside swapValue: x=%d y=%d\n", x, y);
}

// Call by reference (effect outside)
void swapRef(int *x, int *y) {
    int t = *x; *x = *y; *y = t;
}

int main() {
    int a = 10, b = 20;
    printf("Original: a=%d b=%d\n", a, b);

    swapValue(a, b);   // call by value
    printf("After swapValue: a=%d b=%d (unchanged)\n", a, b);

    swapRef(&a, &b);   // call by reference
    printf("After swapRef: a=%d b=%d (swapped)\n", a, b);

    return 0;
}
