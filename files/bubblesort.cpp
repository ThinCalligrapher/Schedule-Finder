// this is bubblesort(the easy way) coded from memory!

#include <iostream>
#include <algorithm>

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[5] {8, 6, 4, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}

// next time I need to pay attention to the function return type and what it returns
// also get in my head the difference between arr and arr[] and arr[0]
// arr seems to reference the starting index of the arr
// arr[] seems to indicate an argument type and the starting index (used in function arguments)

