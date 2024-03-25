#include <iostream>
#include <fstream>
#include <iomanip>

const int rows = 6;
const int cols = 3;

void printMatrix(int matrix[rows][cols]) {
    for (int i=0; i < rows; ++i) {
        for (int j=0; j < cols; j++) {
            std::cout << std::setw(5) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void addMatrices(int matrix1[rows][cols], int matrix2[rows][cols], int matrix3[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printMatrix(matrix3);
}

void multMatrix(int matrix1[rows][cols], int matrix2[rows][cols], int matrix3[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
    printMatrix(matrix3);
}

void subMatrix(int matrix1[rows][cols], int matrix2[rows][cols], int matrix3[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printMatrix(matrix3);
}

void changeElement(int matrix1[rows][cols]) {
    int askRow;
    int askCol;
    int askValue;

    std::cout << "  Enter Row: ";
    std::cin >> askRow;
    std::cout << "  Enter Col: ";
    std::cin >> askCol;
    std::cout << "  Enter Value: ";
    std::cin >> askValue;
    std::cout << "\n";

    matrix1[askRow-1][askCol-1] = askValue;
}


int main() {


    int matrix1[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}
    };

    int matrix2[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}
    };
    int matrix3[rows][cols];
    std::cout << "    Print Matrix\n";
    printMatrix(matrix1);
    std::cout << "\n   Sum of Matrices\n";
    addMatrices(matrix1, matrix2, matrix3);
    std::cout << "\n  Product of Matrices\n";
    multMatrix(matrix1, matrix2, matrix3);
    std::cout << "\n  Difference of Matrices\n";
    subMatrix(matrix1, matrix2, matrix3);
    std::cout << "\n  Update an Element\n";
    changeElement(matrix1);
    printMatrix(matrix1);
}

