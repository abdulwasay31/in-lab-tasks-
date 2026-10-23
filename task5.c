#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j;
    int isNull = 1, isDiagonal = 1, isUpper = 1, isLower = 1, isIdentity = 1;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSquare Matrix\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(mat[i][j] != 0) {
                isNull = 0;
            }
            if(i != j && mat[i][j] != 0) {
                isDiagonal = 0;
            }
            if(i > j && mat[i][j] != 0) {
                isUpper = 0;
            }
            if(i < j && mat[i][j] != 0) {
                isLower = 0;
            }
            if(i == j && mat[i][j] != 1) {
                isIdentity = 0;
            }
            if(i != j && mat[i][j] != 0) {
                isIdentity = 0;
            }
        }
    }

    if(isNull == 1) {
        printf("Null Matrix\n");
    }
    if(isDiagonal == 1) {
        printf("Diagonal Matrix\n");
    }
    if(isUpper == 1) {
        printf("Upper Triangular Matrix\n");
    }
    if(isLower == 1) {
        printf("Lower Triangular Matrix\n");
    }
    if(isIdentity == 1) {
        printf("Identity Matrix\n");
    }

    printf("\nDiagonal elements: ");
    for(i = 0; i < 3; i++) {
        printf("%d ", mat[i][i]);
    }

    printf("\nUpper triangular elements: ");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i < j) {
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\nLower triangular elements: ");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i > j) {
                printf("%d ", mat[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
