#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if(b == 0)
        printf("Division = Not Possible");
    else
        printf("Division = %d", a / b);

    return 0;
}
