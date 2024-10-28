#include <stdio.h>

#include "palindrome.h"
#include "dp.h"
#include "linked_list.h"
#include "sortings.h"

int main(){
    //palindrome
    char str[] = {"uuABbBAxyz"};
    printf("palindrome Input data: %s\n", str);
    char* result = longestPalindrome(str);
    printf("palindrome Result: %s\n", result);
    char str1[] = {"aaaa"};
    result = longestPalindromeDp(str1);
    printf("palindrome DP Result: %s\n", result);
    //======
    //linked list
    link_list_main();
    sort_main();

    //Fibonacci
    int Nth_symbol = 20;
    printf("Fibonacci input (Sum of Nth symbol): %d\n", Nth_symbol);
    unsigned long long res = top_down_alg_sum(Nth_symbol);
    printf("Fibonacci result top_down_alg_sum (Sum of Nth symbol): %llu\n", res);

    printf("Fibonacci input (Sum of Nth symbol): %d\n", Nth_symbol);
    unsigned long long res1 = bottom_up_alg_sum(Nth_symbol);
    printf("Fibonacci result bottom-up alg (Sum of Nth symbol): %llu\n", res1);
    printf("Fibonacci end\n");
    //======
    // DP 2d array
    longest_way_in_matrix();
    //======

    return 0;
}