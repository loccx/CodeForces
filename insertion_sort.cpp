#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin("input.in"); // read in file as input

    int arr_len;
    fin >> arr_len; // read in array length
                    
    int sort[arr_len];
    int j, key;
    for (int k = 0; k < arr_len; k++) { // for loop iterates across each item in the array
        fin >> sort[k]; // read in each item to the array
        key = sort[k]; // set "key" to the current item
        j = k-1; // set j to the index of the current item - 1, aka previous item
        while (j >= 0 && sort[j] > key) { //  if the previous item is larger than the current item: (j >= 0 is just so that it doesn't run for the first few indices)
            sort[j+1] = sort[j]; // set index of j+1 to the item before it. on the first run, this deletes the current item, but we have it stored in key.
            j--; // scoot the index down
            // while loop continues as long as the item sort[j] is still larger than our current item, because that means we have to keep scooting
        }
        sort[j+1] = key; // while loop ends when key (current k item) is finally larger than the scooted j index, and then we will place key right above j, at j+1.
    }
    
    for (int k = 0; k < arr_len; k++) { // output the array
        std::cout << sort[k] << "\n";
    }
}
