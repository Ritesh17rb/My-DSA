#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main()
{
    // 0 1 1 2 3 5 8 13
    int n = 43;
    // vector<int> dp(n + 1, -1);
    // fib(n, dp);

    // dp[0] = 0;
    // dp[1] = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     dp[i] = dp[i - 1] + dp[i - 2];
    // }

    // cout << dp[n] << endl;

    int prev1 = 1, prev2 = 0;

    for (int i = 2; i <= n; i++)
    {
        int cur_i = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur_i;
    }

    cout << prev1 << endl;
    return 0;
}