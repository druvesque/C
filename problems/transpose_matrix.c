#include<stdio.h>

int transpose(int matrix[][]) {
    int rows = sizeof(matrix);
    int columns = sizeof(matrix) / sizeof(matrix[0]);
    int transpose[rows][columns];
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i] = matrix[j][i];
        }
    }
    return transpose;
} 
