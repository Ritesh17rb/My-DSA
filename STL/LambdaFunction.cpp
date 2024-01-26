#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<int> v = {-2, -4};

    sort(v.begin(), v.end(), greater<int>());

    auto flag = all_of(v.begin(), v.end(), [](int x)
                       { return x % 2 == 0; });

    // bool flag = all_of(v.begin(), v.end(), [](int x)
    //                    { return x >= 0; });

    // bool flag = any_of(v.begin(), v.end(), [](int x)
    //                    { return x >= 0; });

    // bool flag = none_of(v.begin(), v.end(), [](int x)
    //                     { return x >= 0; });

    cout
        << flag;

    return 0;
}