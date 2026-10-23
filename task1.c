#include <stdio.h>

int main() {
    int products[5][2];
    int i, j;
    int total, grandTotal = 0;

    printf("Enter quantity and unit price for 5 products:\n");
    for(i = 0; i < 5; i++) {
        printf("Product %d quantity: ", i+1);
        scanf("%d", &products[i][0]);
        printf("Product %d unit price: ", i+1);
        scanf("%d", &products[i][1]);
    }

    printf("\nQuantity\tUnit Price\tTotal Price\n");
    for(i = 0; i < 5; i++) {
        total = products[i][0] * products[i][1];
        printf("%d\t\t%d\t\t%d\n", products[i][0], products[i][1], total);
        grandTotal = grandTotal + total;
    }

    printf("\nGrand Total = %d\n", grandTotal);

    return 0;
}
