#include "array.h"
#include "stdio.h"
#include "stdlib.h"

static int binSearch(int *arr, int start, int end, int target){
    while (start <= end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            return target;
        }
        if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}

static int binSearch_recursion(int *arr, int start, int end, int target){
    if(start <= end){
        int mid = start + (end-start)/2;

        if(target == arr[mid])
            return arr[mid];

        if(target < arr[mid])
            binSearch_recursion(arr, start, mid-1, target);
        else
            binSearch_recursion(arr, mid+1, end, target);
        
    }
    else
        return -1;
}

#define STACK_SIZE 8
static int stack_buf[STACK_SIZE] = {0};
static int top = -1;

static int push(int val);
static int pop();
static int peek();

int threeSumClosest(int* nums, int numsSize, int target);

void array_main(){
    int arr[100] = {0};
    for(int i=99; i>=0; i--)
        arr[i] = i;
    int target = 54;
    target = binSearch_recursion(arr,0,99,target) + 1000;

    int nums1[] = {-1,2,1,-4};
    int target1 = 1;
    int result = threeSumClosest(nums1, sizeof(nums1)/sizeof(*nums1), target1);// Output: 2
    int nums2[] = {0,0,0};
    int target2 = 1;
    result = threeSumClosest(nums2, sizeof(nums2)/sizeof(*nums2), target2);// Output: 0

    //stack
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    result = pop();
    printf("Pop %d\n", result);
    result = pop();
    printf("Pop %d\n", result);
    result = pop();
    printf("Pop %d\n", result);
    result = pop();
    printf("Pop %d\n", result);
    result = pop();
    printf("Pop %d\n", result);
}

static void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

static int partitioning(int* arr, int start, int end){
    int pivot = arr[end];
    for(int i=start; i<end; i++){
        if(arr[i] < pivot){
            swap(&arr[i], &arr[start]);
            start++;
        }
    }
    swap(&arr[end], &arr[start]);
    return start;
}

static void quickSort(int* arr, int start, int end){
    if(start < end){
        int index = partitioning(arr, start, end);
        quickSort(arr, start, index-1);
        quickSort(arr, index+1, end);
    }
}

static int closestVal(const int target, int cur_closest_val, int new_val){
    if(target == new_val){
        return new_val;
    }
    else if(target == cur_closest_val){
        return cur_closest_val;
    }
    else{
            if(abs(cur_closest_val - target) > abs(new_val - target)){
                return new_val;
            }
            else{
                return cur_closest_val;
            }
        }
}

int threeSumClosest(int* nums, int numsSize, int target) {
    
    quickSort(nums, 0, numsSize-1);
    int closest_sum = nums[0] + nums[1] + nums[2];

    for(int i=0; i<numsSize; i++){
        int closest_sum_temp;
        for(int j=i+1, k=numsSize-1; j<k;){
            closest_sum_temp = nums[i] + nums[j] + nums[k];
            // if(closest_sum_temp)
            closest_sum = closestVal(target, closest_sum, closest_sum_temp);
            if(closest_sum == target){
                return closest_sum;
            }
            else if(closest_sum < target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return closest_sum;
}

static int push(int val){
    if(top < STACK_SIZE){
        top++;
        stack_buf[top] = val;   
        return 0;
    }
    return -1;
}
static int pop(){
    if(top >= 0){
        int temp = stack_buf[top];
        top--;
        return temp;
    }
    else
    return -1;
}
static int peek(){
    return stack_buf[top];
}
