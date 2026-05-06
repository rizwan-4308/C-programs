#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, x;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);
    
    int sum = a + b;
    printf("\nSum = %d", sum);

    int multiply = a * b;
    printf("\nProduct = %d", multiply);

    c = d = 2;
    double power = pow(c, d);
    printf("\nPower = %.01f", power);

    x = 6 + 2/2 * 3;
    printf("\n%d", x);
    
    return 0;
}