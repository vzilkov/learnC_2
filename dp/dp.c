#include <stdlib.h>
#include <stdio.h>
#include "dp.h"

static unsigned long long recursion(int n){
    if(n==0 || n==1)
        return n;
    return recursion(n-1) + recursion(n-2);
}

unsigned long long top_down_alg_sum(int n){ //Fibonacci
    unsigned long long result_sum;
    result_sum = recursion(n);
    return result_sum;
}

unsigned long long bottom_up_alg_sum(int n)
{
    if(n<2)
        return n;

    unsigned long long result_sum;
    unsigned long long *result_buf = (unsigned long long *)calloc(n+1, sizeof(unsigned long long));
    result_buf[0] = 0;
    result_buf[1] = 1;

    for(int i=2; i<=n; i++){
        result_buf[i] = result_buf[i-1] + result_buf[i-2];
    }
    result_sum = result_buf[n];
    free(result_buf);
    return result_sum;
}

static int min(int a, int b){
    if(a <= b)
        return a;
    else
        return b;
}
static int max(int a, int b){
    if(a <= b)
        return b;
    else
        return a;
}

#define M 4
#define N 5
static int cost[M][N] = {
                     5, 2, 3,-2,-2,
                    -1, 4, 1,-3,10,
                     6,-2, 4,-5, 0,
                    12,-8,-5, 3, 6
    };

int longest_way_in_matrix(){
    printf("Dynamic programming matrix:\n");
    int dp[M][N] = {0};
    dp[0][0] = cost[0][0];

    for(int i=1; i<N; i++)
    {
        dp[0][i] = dp[0][i-1] + cost[0][i];
    }
    for(int i=1; i<M; i++)
    {
        dp[i][0] = dp[i-1][0] + cost[i][0];
    }
    for(int i=1; i<M; i++){
        for(int j=1; j<N;j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + cost[i][j];
        }
    }//n2
    for(int i=0; i<M; i++){
        for(int j=0; j<N;j++)
        {
            printf(" %d ", dp[i][j]);
        }
        printf("\n");
    }
    
    return dp[M-1][N-1];
}
