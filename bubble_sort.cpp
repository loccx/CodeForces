#include <iostream>
#include <fstream>
/*
int main() {
    std::ifstream fin("input.in"); // opens file as input

    int array_length;
    fin >> array_length; // reads in the array length

    int array_to_sort[array_length];
    for (int k = 0; k < array_length; k++) {
        fin >> array_to_sort[k];
        for (int i = 0; i < k; i++) {
            if (array_to_sort[k] < array_to_sort[i]) {
                int temp = array_to_sort[k];
                array_to_sort[k] = array_to_sort[i];
                array_to_sort[i] = temp;
            }
        }
    }

    for (int k = 0; k < array_length; k++) {
        std::cout << array_to_sort[k] << "\n";
    }
    return 0;
}
*/

int main() {
    std::ifstream fin("input.in");

    int arr_len;
    fin >> arr_len;

    int arr_sort[arr_len];
    for (int k = 0; k < arr_len; k++) {
        fin >> arr_sort[k];
        for (int i = 0; i < k; i++) {
            if (arr_sort[k] > arr_sort[i]) {
                int temp = arr_sort[k];
                arr_sort[k] = arr_sort[i];
                arr_sort[i] = temp;
            }
        }
    }
    
    for (int k = 0; k < arr_len; k++) {
        std::cout << arr_sort[k] << "\n";
    }
    return 0;
}
