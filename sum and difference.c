#include <stdio.h>

int main() {
    int int1, int2;
    float float1, float2;

    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    // Read inputs for float variables
    printf("Enter two floats: ");
    scanf("%f %f", &float1, &float2);

    int int_sum = int1 + int2;
    int int_diff = int1 - int2;
    float float_sum = float1 + float2;
    float float_diff = float1 - float2;

    printf("Sum of integers: %d\n", int_sum);
    printf("Difference of integers: %d\n", int_diff);
    printf("Sum of floats (rounded to one decimal place): %.1f\n", float_sum);
    printf("Difference of floats (rounded to one decimal place): %.1f\n", float_diff);

    return 0;
}
