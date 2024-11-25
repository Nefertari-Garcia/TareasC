#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int sum = 0, count = 0, mode = 0, max_freq = 0;
    int freq[100] = {0};

    printf("Ingrese el número de filas (máximo %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Ingrese el número de columnas (máximo %d): ", MAX_COLS);
    scanf("%d", &cols);

    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            count++;

            freq[matrix[i][j]]++;
        }
    }

    for (int i = 0; i < 100; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            mode = i;
        }
    }


    printf("La suma de los elementos es: %d\n", sum);
    printf("El promedio de los elementos es: %.2f\n", (double)sum / count);
    printf("La moda de la matriz es: %d\n", mode);

    return 0;
}