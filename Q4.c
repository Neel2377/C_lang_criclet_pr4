#include <stdio.h>

int main() {
    int k = 5; 

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = 0; j < k - i; j++) {
            if (j % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
