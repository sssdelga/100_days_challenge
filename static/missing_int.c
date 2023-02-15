#include <stdio.h>

// Given an array of integers, find the first missing positive integer in linear time and constant space. 
// In other words, find the lowest positive integer that does not exist in the array. 
// The array can contain duplicates and negative numbers as well.

// For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

int find_missing_int(int* arr1, int arr_size){
    int min_num = arr1[0];
    for(int i=1; i<arr_size; i++){
        if(arr1[i]<min_num){
            min_num = arr1[i];
        }
    }
    for(int j=0; j<arr_size; j++){
        
    }
}

int main(){
    int test_array[] = {1, 2, 4};

}
