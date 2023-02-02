
#include <iostream>
#include <stdlib.h>

void ArrSort(int* Arr, int UserChoise) {
    for(int i = 0; i < UserChoise; i++) {
        for (int j = 0; j < UserChoise; j++) {
            if (Arr[j] > Arr[j+1]) {
                int a = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = a;
            }
        }
    }
}
void UserArray(int* Arr) {
    int UserChoise;
    std::cout << "Enter array leight:\n";
    std::cin >> UserChoise;
    Arr = (int*)calloc(UserChoise, sizeof(int));
    for (int i = 0; i < UserChoise; i++) {
        Arr[i] = i + rand() % 20;
    }
    std::cout << "You're array wiht random numbers:\n";
    ArrSort(Arr, UserChoise);
    for(int i = 0; i < UserChoise; i++) {
        std::cout << Arr[i] << " ";
    }
    free(Arr);
}
int main() {
   int* Arr;
   UserArray(Arr);
}
