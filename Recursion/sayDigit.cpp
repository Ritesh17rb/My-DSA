#include <bits/stdc++.h>
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
using namespace std;

void sayDigit(int n, string arr[])
{
    // Base Case

    if (n == 0)
    {
        return;
    }
    // Processing

    int digit = n % 10;
    n /= 10;
    sayDigit(n, arr);
    cout << arr[digit] << " ";

    // Recursive call
}

int main()
{
    fast_io;
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigit(n, arr);
    return 0;
}