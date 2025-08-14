// C++ Code Challenges, LinkedIn Learning

// Challenge #2: Sorting an Array
// Sort the elements in an array in ascending order.
// Implement the algorithm of your choice.
// Don't use STL vectors.
// Don't use a sorting function from a library.

#include <iostream>

// Function which merge array and retrun pointer to pivot element
int* partition(int* left_idx, int* right_idx){
    int pivot = *right_idx / 2;
    int* i = left_idx - 1;
    for(int* j = left_idx; j < right_idx; ++j) {
        if(*j < pivot) {
            ++i;
            std::swap(*i, *j);
        }
    }

    std::swap(*(i + 1), *right_idx);
    return i + 1;

}

void quick_sort(int* left_idx, int* right_idx) {
    if(left_idx < right_idx) {
        int* pi = partition(left_idx, right_idx);
        quick_sort(left_idx, pi - 1);
        quick_sort(pi + 1, right_idx);
    }
}
// sort_array()
// Summary: This function receives an array of integers and sorts it in ascending order.
// Arguments:
//           arr: A pointer acting as the array to sort.
//           n: The size of the array.
// Returns: A boolean value: True on success, false otherwise.
bool sort_array(int *arr, int n){

    quick_sort(arr, arr + n - 1);
    

    return false;
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
