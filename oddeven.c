#include <stdio.h>
int main() {
    int a[100], n, i, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}
