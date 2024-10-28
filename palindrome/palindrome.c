#include "palindrome.h"
#include "string.h"

#include "stdlib.h"
#include "stdio.h"

static int isPalindrome(char* s, int start, int end){
    int len = end-start;
    for(int i=start, j=end-1; i<j; i++,j--){
        if(s[i] != s[j])
        {
            return 0;
        }
    }
    return len;
}

char* longestPalindrome(char* s){
    int count_max_len = 0;
    int len = strlen(s);
    char *mark = s;
    for(int i=0; i<len; i++)
    {
        for(int j=len; j>i; j--)
        {
            int sym_count = isPalindrome(s, i, j);
            if(count_max_len < sym_count)
            {
                count_max_len = sym_count;
                mark = &s[i];
            }
        }
    }
    *(mark + count_max_len) = '\0';
    return mark;
}

char* longestPalindromeDp(char* s)
{
    //uuABbbBAxyz
    int len = strlen(s);
    printf("Palindrome DP input %s\n", s);
    int* dp = (int*) calloc(len*len, sizeof(int));

    int max_subP_len = 1;
    char *start;

    for(int i=0; i<len; i++){
        *(dp + i*len + i) = 1;
    }       

    for(int i=0; i<len-1; i++){
        if(s[i] == s[i+1]){
            *(dp + i*len + i+1) = 1;
            start = &s[i];
            max_subP_len = 2;
        }
    }

    for(int k=3; k<=len; k++){
        for(int i=0; i<len-k+1; i++)
        {
            int j = k+i-1;
            if(s[i] == s[j] 
            && j>=i
            && *(dp + len*(i+1)+j-1) == 1
            )
            {
                *(dp + i*len + j) = 1;
                if (k > max_subP_len) {
                    start = &s[i];
                    max_subP_len = k;
                }
            }
            printf(" %d", *(dp + i*len + j));
                    
            // palindrome len new
            // if longer set new val
        }
        printf("\n");
    }
    printf("\n");
    
    free(dp);
    return start;
}