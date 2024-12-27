#include <stdio.h>

int main() {
    int k = 5;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= k - i; j++) {
            printf("  ");
        }
        for (int j = k - i + 1; j <= k; j++) {
            printf("%d ", j);
        }
        for (int j = k - 1; j >= k - i + 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

}
