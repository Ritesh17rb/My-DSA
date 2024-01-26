#include <bits/stdc++.h>
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> k;
        int a = n / k;
        int b = n % k;
        if (b == x)
        {
            cout << "No" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < a; i++)
            {
                cout << k << " ";
            }
            for (int i = 0; i < b; i++)
            {
                cout << b << " ";
            }
        }
    }
    return 0;
}