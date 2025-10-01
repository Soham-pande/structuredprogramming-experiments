#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, total;
    float average;

    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5.0;

    printf("\nTotal Marks = %d\n", total);
    printf("Average = %.2f\n", average);

    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 80)
        printf("Grade: B\n");
    else if (average >= 70)
        printf("Grade: C\n");
    else if (average >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
