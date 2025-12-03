#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1, den = 1;
    for (int i = 1; i <= n; i++) {
        den = num + 1;
        sum += (double)num / den;
        num += 2;
    }

    printf("Sum of series = %.4f\n", sum);
    return 0;
}
