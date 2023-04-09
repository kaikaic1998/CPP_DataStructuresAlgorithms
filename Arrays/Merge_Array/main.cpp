// Merge and sort arrays [0, 3, 4, 31], [4, 6, 30]
//[0, 3, 4, 4, 6, 30, 31]

#include <iostream>
#include <algorithm>
#include <string>

int* merge_array(int* array1, int* array2, int size1, int size2);
void sort_array(int* array, int size);

int main(){
    int array1[] = {0, 3, 4, 31};
    int array2[] = {4, 6, 30};

    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);

    int* result_array = merge_array(array1, array2, size1, size2);

    // display sorted array
    for(int i{0}; i < (size1+size2); i++){
        std::cout << result_array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// returns pointer to the address of the array
int *merge_array(int* array1, int* array2, int size1, int size2){ // O(n)
    int merge_array_size = size1 + size2;
    int* array_ptr = new int [merge_array_size]; // array_ptr is the address of new array

    for(int i{0}; i < (size1); i++){
        array_ptr[i] = array1[i];
    }

    int j {0};
    for(int i{size1}; i < (merge_array_size); i++){
        array_ptr[i] = array2[j];
        j++;
    }

    sort_array(array_ptr, merge_array_size); // pass the address of the array
    
    return array_ptr; // return the address of the array
}

void sort_array(int* array, int size){ // sort via the address of the array, O(n)
    for(int i{1}; i < size; i++){
        if (array[i-1] > array[i]){
            int temp{array[i-1]};
            array[i-1] = array[i];
            array[i] = temp;
        }
    }
}