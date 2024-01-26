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
    int arr[] = {1, 1, 1, 1, 1, 1, 4};
    int n = 7;

    int low = lower_bound(arr, arr + n, 10) - arr;

    int high = upper_bound(arr, arr + n, 10) - arr;

    high--;

    cout << "Low->" << low << endl;
    cout << "high->" << high << endl;

    cout << "Total occurences are " << high - low + 1 << endl;

    return 0;
}