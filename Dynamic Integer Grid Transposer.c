#include <stdio.h>
int main() {
    int matrix[10][10];
    int rows, cols;
    printf("=== Dynamic Grid Transposer ===\n");
    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);
    printf("Enter values for a %dx%d grid:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nOriginal Matrix Layout:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nFlipped (Transposed) Layout:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
