#include <stdio.h>
int main() {
    int a[100], n, i, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = (float)sum / n;
    printf("Sum = %d, Average = %.2f\n", sum, avg);
    return 0;
}
