#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a matrix with given rows and columns
int** createMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to deallocate memory of a matrix
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to read elements of a matrix from the user
void readMatrix(int** matrix, int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
int** addMatrix(int** matrix1, int** matrix2, int rows, int cols) {
    int** result = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

// Function to multiply two matrices
int** multiplyMatrix(int** matrix1, int** matrix2, int rows1, int cols1, int cols2) {
    int** result = createMatrix(rows1, cols2);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

// Function to transpose a matrix
int** transposeMatrix(int** matrix, int rows, int cols) {
    int** result = createMatrix(cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Read the dimensions of the matrices from the user
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible!\n");
        return 1;
    }

    // Create memory for matrices
    int** matrix1 = createMatrix(rows1, cols1);
    int** matrix2 = createMatrix(rows2, cols2);

    // Read elements of the matrices from the user
    printf("Enter elements of the first matrix:\n");
    readMatrix(matrix1, rows1, cols1);

    printf("Enter elements of the second matrix:\n");
    readMatrix(matrix2, rows2, cols2);
  int** resultAdd;

    // Perform matrix operations and print the results
  if ((rows1==rows2) && (cols1==cols2))
  {
     resultAdd = addMatrix(matrix1, matrix2, rows1, cols1);}
    int** resultMultiply = multiplyMatrix(matrix1, matrix2, rows1, cols1, cols2);
    int** resultTranspose = transposeMatrix(matrix1, rows1, cols1);

    printf("\nMatrix 1:\n");
    printMatrix(matrix1, rows1, cols1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2, rows2, cols2);

    printf("\nMatrix Addition Result:\n");
    printMatrix(resultAdd, rows1, cols1);

    printf("\nMatrix Multiplication Result:\n");
    printMatrix(resultMultiply, rows1, cols2);

    printf("\nMatrix Transpose:\n");
    printMatrix(resultTranspose, cols1, rows1);

    // Free memory
    freeMatrix(matrix1, rows1);
    freeMatrix(matrix2, rows2);
    freeMatrix(resultAdd, rows1);
    freeMatrix(resultMultiply, rows1);
    freeMatrix(resultTranspose, cols1);

    return 0;
}
