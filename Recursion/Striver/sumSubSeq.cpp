#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sumSeq(int index, vector<int> &v, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false; // Add a return statement here to stop recursion
    }

    v.push_back(arr[index]);
    s += arr[index];
    if (sumSeq(index + 1, v, s, sum, arr, n) == true)
        return true;

    s -= arr[index];
    v.pop_back();

    if (sumSeq(index + 1, v, s, sum, arr, n) == true)
        return true;

    return false;
}

int sumSeqNo(int index, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (s == sum)
            return 1;

        else
            return 0;
    }

    // v.push_back(arr[index]);
    s += arr[index];
    int l = sumSeqNo(index + 1, s, sum, arr, n);

    s -= arr[index];
    // v.pop_back();

    int r = sumSeqNo(index + 1, s, sum, arr, n);

    return l + r;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int sum = 20;
    int s = 0;
    vector<int> v;
    // sumSeq(0, v, 0, sum, arr, n);
    cout << sumSeqNo(0, 0, sum, arr, n);

    return 0;
}
