#include <stdio.h>

int main() {
    int f1 = 0, f2 = 1, f3, n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d %d", f1, f2);  // print first two numbers

    for (f3 = f1 + f2; f3 <= n; ) {
        printf(" %d", f3);
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

    return 0;
}
