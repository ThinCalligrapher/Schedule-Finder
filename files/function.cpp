#include <iostream>

void foo(int arr[], int n) {
    for(size_t i{}; i < n; i++) {
        std::cout << *(arr + i) << "\n";
    }
}


void faa(int* arr, int n) {
    for(int i{}; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }
}


int main(int argc, char* argv[]) {
    if(argc > 1) {
        std::cout << argv[1] << std::endl;
    }

    int arr[] {1, 2, 3, 4, 5, 6};

    int arg[10] {1, 2, 3, 4, 5, 6, 7};

    foo(arr, 6);

    std::cout << "-----------------" << std::endl;

    faa(arg, 7);

    std::cout << "-----------------" << std::endl;

    faa(arg, 10);

    return 0;
}