#include <stdio.h>

int check_for_sum(int* arr1, int arr_size, int sum1){
    int sum_result = 0; // default is false meaning no results
    for(int i=0; i<arr_size; i++){
        int missing_number = sum1 - arr1[i];
        if(arr1[i+1]==missing_number){
            sum_result = 1; // set result to true
        }
        else if(arr1[i+2]==missing_number){
            sum_result = 1;
        }
        else{
            // sum result stays false
        }
    }
    return sum_result;
}

int main(){
    int test_array[] = {1, 2, 3};
    int test_sum = 4;
    int* p_test_array = test_array;

    int are_there_sums = check_for_sum(p_test_array, sizeof(test_array), test_sum);
    if(are_there_sums==0){
        char r_there_sums[] = "no";
    } else {
        char r_there_sums[] = "yes";
    }
    printf("Is there a sum?: %s", r_there_sums);
}
