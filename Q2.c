#include <stdio.h>

int main(){
    int i, j, k = 11;
    for (i = 11; i <= 14; i++){
        for (j = 11; j <= i; j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}