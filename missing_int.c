#include <stdio.h>

// Given an array of integers, find the first missing positive integer in linear time and constant space. 
// In other words, find the lowest positive integer that does not exist in the array. 
// The array can contain duplicates and negative numbers as well.

// For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

int find_missing_int(int* arr1, int arr_size_bytes){
    int arr_size = arr_size_bytes/sizeof(arr1[0]);
    printf("Array size: %d", arr_size);
    // find beginning of range
    int min_num = arr1[0];
    for(int i=1; i<arr_size; i++){
        if(arr1[i]<min_num){
            min_num = arr1[i];
            printf("\n%d Min num: %d", i, min_num);
        }
    }
    // find end of range
    int max_num = arr1[0];
    for(int j=1; j<arr_size; j++){
        if(arr1[j]>max_num){
            max_num = arr1[j];
            printf("\n%d Max num: %d", j, max_num);
        }
    }
    // check for all numbers
    int range = max_num - min_num; // helps us find how many integers there should be
    double x = 1;
    int is_there_zero = 0; // false
    int is_there_one = 0; // false
    // from lowest num to highest, set a total expected product sans zeroes
    for(int k=min_num; k<=max_num; k++){ 
        if(k==0){
            printf("\n*");
            is_there_zero = 1;
            continue; // don't want to * or / zero
        } else if(arr1[k]==1){
            is_there_one = 1; // no difference if multiplied
            printf("\n*1*");
        } else {
            x = x*k;
            printf("\nX: %d", x);
        }
    } // result is a product without zero

    // now divide out numbers from the array after checking for 1 or 0
    for(int m=0; m<arr_size; m++){
        if(arr1[m]==0){
            printf("\n*");
            continue;
        } else {
            x = x/arr1[m];  // limitation: can only work if there's only one missing integer
            printf("\nx remaining: %d", x);
        }
    }
    if(x==1 || x==0){
        if(arr_size<(range+1)){
            if(is_there_one==1){ // checking for both one and zero is redundant work  - clean up
                x=0;
            } else {
                x=1;
            }
        } else {
            printf("\n\nThere are no missing integers");
        } // can move the check for no missing integers to the top
    }
    return x;
}

int main(){
    int test_array[] = {16, 18, 20, 21, 22, 15, 24, 23, 17};
    int* p_test_array = test_array;

    int whats_missing = find_missing_int(p_test_array, sizeof(test_array));
    printf("\n\nThe missing integer is: %d", whats_missing);
}
