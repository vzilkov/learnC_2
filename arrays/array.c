#include "array.h"
#include "stdio.h"

static int ** array_creation(int rows, int columns){
    int **arr = 
}

static int **arr_operations(int *arr, int len){
    int **arr_main = calloc(10, sizeof(int*));
    for(int )
}

void array_main(){
    int len = 10;
    int arr[len];
    for(int i=0; i<len; i++)
        arr[i] = 100+i+1;
    int ret_val[3];
    ret_val = arr_operations(arr,len);

}