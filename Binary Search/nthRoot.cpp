// Time Complexity: N x log(M x 10^d)

//   https://takeuforward.org/data-structure/nth-root-of-a-number-using-binary-search/

#include <bits/stdc++.h>
using namespace std;
double multiply(double number, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }
    return ans;
}

void getNthRoot(int n, int m)
{
    double low = 1;
    double high = m;
    double eps = 1e-7;

    while ((high - low) > eps)
    {
        double mid = (low + high) / 2.0;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    cout << n << "th root of " << m << " is " << low << endl;
    cout << pow(m, (1.0) / n)<<endl;;
    cout<<pow(m,n);
}
int main()
{
    int n = 3, m = 2;
    getNthRoot(n, m);
    return 0;
}