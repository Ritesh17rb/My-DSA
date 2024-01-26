#include <bits/stdc++.h>
#define ll long long
using namespace std;

void f(int i, int n)
{
    if (i > n)
        return;

    f(i + 1, n);
    cout << i << endl;
}
int s = 0;
int sum(int n)
{
    if (n < 1)
        return s;

    sum(n - 1);
    s += n;
}
void reverseFunc(vector<int> &v, int n, int l)
{

    if (l >= n / 2)
        return;

    swap(v[l], v[n - l - 1]);

    reverseFunc(v, n, l + 1);
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

bool isPalindrome(string s, int l)
{

    if (l >= s.length() / 2)
        return true;

    if (s[l] != s[s.length() - 1 - l])
        return false;

    return isPalindrome(s, l + 1);
}

int fib(int n, int first, int second)
{
    // if (n > 0)
    // {
    //     cout << first << " ";
    //     fib(n - 1, second, first + second);
    // }
}
void subSeq(vector<int> v, vector<int> &ans, int i, int n)
{
    if (i == n)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        if (ans.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }

    ans.push_back(v[i]);
    subSeq(v, ans, i + 1, n);
    ans.pop_back();
    subSeq(v, ans, i + 1, n);
}

int main()
{

    string s;
    cin >> s;

    int n = s.length();
    for (int i = 0; i < (1 << n); i++)
    {
        string ans = "";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                ans += s[j];
            }
        }
        cout << ans << endl;
    }
    // int l = 0, r = s.length() - 1;
    // cout << "isPalindrome " << isPalindrome(s, l);
    // int n;
    // cin >> n;
    // int l = 0, r = 1;
    // cout << " Fibonacci Numbers are " << fib(n, l, r);
    // cout << "Factorial " << fact(n);
    // f(1, n);
    // cout << sum(n);
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // Subsequences
    // vector<int> ans;
    // subSeq(v, ans, 0, n);

    // int l = 0, r = n - 1;
    // reverseFunc(v, n, l);
    // for (auto it : v)
    //     cout << it << " ";
    return 0;
}