#include "edit_distance.h"


int min(int a, int b, int c)
{
    if (a <= b && a <= c) return a;
    if (b <= a && b <= c) return b;
    return c;
}


int edit_distance(char* code_fragment, char* syntax_rule)
{
    int m = strlen(code_fragment);
    int n = strlen(syntax_rule);
    int dp[m+1][n+1];


    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (code_fragment[i-1] == syntax_rule[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(dp[i-1][j],
                                   dp[i][j-1],
                                   dp[i-1][j-1]);
        }
    }

    return dp[m][n];
}
