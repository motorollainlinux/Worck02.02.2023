#include <iostream>
#include <stdlib.h>

void UserMatrix(int** Matrix) {
    int width, height;
    std::cout << "Enter width of matrix:\n";
    std::cin >> width;
    std::cout << "Enter height of matrix:\n";
    std::cin >> height;
    for (int i = 0; i < width; i++) {
        *Matrix = (int*)malloc(height * sizeof(int)); // !! программа дальше не идёт. Я не могу понять почему. !! //
    }
    std::cout << "Enter numbers for matrix:\n";
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            std::cin >> Matrix[i][j];
        }
    }
    std::cout << "You're beatyfull matrix:\n";
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            std::cout << Matrix[i][j];
        }
        std::cout << "\n";
    }
    free(Matrix);
}
int main() {
   int** Matrix;
   UserMatrix(Matrix);
}
