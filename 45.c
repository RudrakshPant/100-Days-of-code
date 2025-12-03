#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 2, den = 3;
    for (int i = 1; i <= n; i++) {
        sum += (double)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum of series = %.4f\n", sum);
    return 0;
}
