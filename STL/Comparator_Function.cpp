#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool should_i_swap(int a, int b)
{
    return a < b;
}

int main()
{
    vector<int> v = {3, 1, 34, 54, 5, 33};
    int n = v.size();

    sort(v.begin(), v.end(), should_i_swap);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (should_i_swap(v[i], v[j]))
    //         {
    //             swap(v[i], v[j]);
    //         }
    //     }
    // }
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}