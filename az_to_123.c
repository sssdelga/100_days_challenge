#include <stdio.h>
#include <stdlib.h>

// Assign every lowercase letter a value.
// Given a string of letters calculate the sum.

int word_calculator(char* arr, int arr_size){
    int arr_sum = 0;
    for(int i=0; i<arr_size; i++){
        if(arr[i]=='a'){
            printf("%c-", arr[i]);
            arr_sum = arr_sum + 1;
        }
        if(arr[i]=='b'){
            printf("%c-", arr[i]);
            arr_sum = arr_sum + 2;
        }
        if(arr[i]=='c'){
            printf("%c-", arr[i]);
            arr_sum = arr_sum + 3;
        }
        if(arr[i]=='d'){
            printf("%c-", arr[i]);
            arr_sum = arr_sum + 4;
        }
        if(arr[i]=='e'){
            printf("%c-", arr[i]);
            arr_sum = arr_sum + 5;
        }
        if(arr[i]=='f'){
            printf("%c-", arr[i]);
            arr_sum = arr_sum + 6;
        }
    }
    printf("\n%d", arr_sum);
}

int main(){
    char test_arr[] = "abcde";
    char *p_test_arr = test_arr;
    int sum = word_calculator(p_test_arr, sizeof(test_arr));
    //printf("%d", sum); 
}