#include <stdio.h>
#include <stdlib.h>

// Leetcode 75

// Level 1
// 1. Running sum of 1D array
/* Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]...nums[i])
   Return the running sum of nums */

/* Note: The returned array must be malloced, assume caller calls free().*/

int* runningSum(int* nums, int numsSize, int* returnSize){
    // We are receiving nums, an array to sum
    // numsSize, the size of nums array
    // returnSize, a pointer to the size of the returned array from this function
    
    // need to create size int for i below

    int a_ret_size = *returnSize;
    printf("\nReturn size from function: %d", a_ret_size);
    int* p_a_ret_size = &a_ret_size;
    int ret_arr_size = a_ret_size + 1;
    printf("\nNew return array size: %d", ret_arr_size);
    int ret_arr[ret_arr_size];

    for(int j=0; ((j<= a_ret_size) && (j< numsSize)); j++){
        // for instance if the previous returned array contained two sums, returnSize = 2
        // the for loop will run until i = 2, meaning the third index

        
        
    }

    return 0;
}

int main(){
    int nums_arr[] = {1, 2, 3, 4};
    int nums_size = sizeof(nums_arr);
    int* p_nums_arr = nums_arr;

    printf("%d", nums_size);

    int rs_size = 0;
    int* p_rs_size = &rs_size;

    // Checking values from the pointers
    printf("\n\n\nArray pointer: %lu\n\nReturn size pointer: %d", p_nums_arr, p_rs_size);
    printf("\n\n\nArray index 0: %d\n\nReturn size: %d", p_nums_arr[0], *p_rs_size);

    runningSum(p_nums_arr, nums_size, p_rs_size);
    
}



// int* running_sum(int nums[]){
//     int sum_i = 0;
//     static int sumof_sum[4];
//     for(int i = 0; i<4; i++){
//         sum_i = sum_i + nums[i];
//         sumof_sum[i] = sum_i;
//     }
//     int* p_sums = &sumof_sum;
//     printf("%d\n", p_sums);
//     return p_sums;
// }

// int main(){
//     int arr1[] = {1, 4, 6, 3};
//     int* p_result1 = running_sum(arr1);
//     printf("%d", p_result1);
//     //int result1 = &p_result1;
//     //printf("%d", result1);
// }


