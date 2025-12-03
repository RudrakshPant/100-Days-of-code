#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);

    swapped = last * (int)pow(10, digits);
    swapped += n % (int)pow(10, digits);
    swapped -= last;
    swapped += first;

    printf("Swapped Number = %d\n", swapped);
    return 0;
}
