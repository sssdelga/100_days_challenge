#include <stdio.h>
#include <stdbool.h>

int two_sum(int arr1[], int target, int arr_len){
    // brute force solution    

    // check some outputs
    printf("arr_len= %d", arr_len);
    printf("\narray element size= %lu", sizeof(arr1[0]));
    arr_len = arr_len/sizeof(arr1[0]);
    printf("\nNew array length: %d\n\n\n", arr_len);
    // initialize some stuff
    int results[2];
    bool test_bool = false;

    for(int i=0; i<arr_len-1; i++){
        printf("\nLoop i: %d", i);
        printf("\nValue i: %d", arr1[i]);
        for(int j=1; j<arr_len; j++){
            printf("\nLoop j: %d", j);
            printf("\nValue j: %d", arr1[j]);
            if(arr1[i]+arr1[j]==target){
                printf("\nEntered the target statement\n");
                test_bool = true;
                results[0] = i;
                results[1] = j;
                printf("%d, %d", results[0], results[1]);
                break;
            }
        }
        if(test_bool == true){
            break;
        }
    }
    if(test_bool == false){
        printf("No results found");
        return 0;
    }
    return results[0], results[1];
}

int main(){
    int test_arr[] = {3, 4, 2, 7, 1, 5};
    int test_target = 6;

    int twosum_result = two_sum(test_arr, test_target, sizeof(test_arr));
    printf("\n\n%d", twosum_result);

    return 0;

}


