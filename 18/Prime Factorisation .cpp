#include <stdio.h>

int main() {
    int k, x = 2;
    printf("Enter number : ");
    scanf_s("%d", &k);
    if (k > 0) {
        printf("Factoring Result : ");
        while (k != 1) {
            if (k % x == 0) {
                while (k % x == 0) {
                    printf(" %d ", x);
                    k = k / x;
                }
            }
            x++;
        }
    }
    else {
        printf("wrong number");
    }

    return 0;
}
