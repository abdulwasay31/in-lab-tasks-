#include <stdio.h>

int main() {
    int i, j, k, num, power, result;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            if(j == 1) {
                power = 1;
            } else if(j % 2 == 0) {
                power = 2;
            } else {
                power = 3;
            }

            result = 1;
            for(k = 1; k <= power; k++) {
                result = result * j;
            }

            printf("%d ", result);
        }
        printf("\n");
    }

    return 0;
}
