#include "sortings.h"
#include "stdio.h"

void selection_sort(int *arr, int len);
void quick_sort(int *arr, int start, int end);
static void swap(int *a, int *b);

void sort_main(){
    int arr[] = {10,100,1,333,23,98,78,126,54,12,3,45};
    int len = sizeof(arr)/sizeof(*arr);
    selection_sort(arr, len);

    int arr1[] = {10,100,1,333,23,98,78,126,54,12,3,45};
    len = sizeof(arr1)/sizeof(*arr1);
    quick_sort(arr1, 0, len-1);
}

static void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int len){
    for(int i=0; i<len; i++){
        int min = i;
        for(int j=i; j<len; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(arr[min] < arr[i])
            swap(&arr[min], &arr[i]);
    }
}
//int arr1[] = {10,100,1,333,23,98,78,126,54,12,3,45};
// 10,100,1,333,23,98,78,126,54,12,3,45 //i=0
// 10,100,1,333,23,98,78,126,54,12,3,45 //i=1
// 10,100,1,333,23,98,78,126,54,12,3,45 //i=1
// 10,100,1,333,23,98,78,126,54,12,3,45 //i=1
// 10,100,1,333,23,98,78,126,54,12,3,45 //i=1
// 10,1,100,333,23,98,78,126,54,12,3,45 //i=2
// 10,1,100,333,23,98,78,126,54,12,3,45 //i=2
// 10,1,23,333,100,98,78,126,54,12,3,45 //i=3
// 10,1,23,333,100,98,78,126,54,12,3,45 //i=3
// 10,1,23,12,100,98,78,126,54,333,3,45 //i=4
// 10,1,23,12,3,98,78,126,54,333,100,45 //i=5
// 10,1,23,12,3,45,78,126,54,333,100,98 //i=5
int partitioning(int *arr, int start, int end){
    int pivot = arr[end];
    int i = start;
    for(int j=start; j<end; j++){
        if(pivot > arr[j]){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[end]);
    return i;
}

void quick_sort(int *arr, int start, int end){ // included end, start indexes
    if(end > start){
        int pi = partitioning(arr, start, end);
        quick_sort(arr, start, pi-1);
        quick_sort(arr, pi+1, end);
    }
}
