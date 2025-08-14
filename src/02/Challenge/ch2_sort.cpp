// C++ Code Challenges, LinkedIn Learning

// Challenge #2: Sorting an Array
// Sort the elements in an array in ascending order.
// Implement the algorithm of your choice.
// Don't use STL vectors.
// Don't use a sorting function from a library.

#include <iostream>

// sort_array()
// Summary: This function receives an array of integers and sorts it in ascending order.
// Arguments:
//           arr: A pointer acting as the array to sort.
//           n: The size of the array.
// Returns: A boolean value: True on success, false otherwise.
bool sort_array(int *arr, int n){

    // Write your code here
    int pivot_index = n/2;
    int pivot = arr[pivot_index];
    std::cout << pivot << std::endl;

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    

    return false;
}
// Function which merge array and retrun pointer to pivot element
int* partition(int* left_idx, int* right_idx){
    int pivot = *right_idx/2;
    int* i = left_idx -1;
    for(int* j = left_idx; j < right_idx; ++j) {
        if(*j < pivot) {
            ++i;
            std::swap(*i, *j);
        }
    }

    std::swap(*(i + 1), *right_idx);
    return i + 1;

}

void quick_sort(int *arr, int left_idx, int right_idx) {
    
}

// Main function
int main(){
    // The following array will be treated as an array of length len. 
    const int len = 7; // Don't exceed the length of the array below!
    int array[] = {2, 9, 4, 3, 5, 1, 6, 8, 0, 7};


    // Print the original array
    std::cout << "Original Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    sort_array(array, len); // Sort the array

    // Print the sorted array
    std::cout << "  Sorted Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    return 0;
}
