#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; // Length of the array
    cin >> n;

    vector<int> a(n);
    int sum_a = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_a += a[i];
    }

    if (sum_a % n != 0)
    {
        cout << -1 << endl; // Sum is not divisible by the number of elements
    }
    else
    {
        int target = sum_a / n; // Calculate the target value
        int operations = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < target)
            {
                int diff = target - a[i];

                if (diff % 2 == 0)
                {
                    operations += diff / 2;
                    a[i] = target; // Update the element to reach the target
                }
                else
                {
                    cout << -1 << endl; // Can't reach the target using Type 1 operations
                    return 0;
                }
            }
            else if (a[i] > target)
            {
                int diff = a[i] - target;
                if (diff % (n - 1) == 0)
                {
                    operations += diff / (n - 1);
                    a[i] = target; // Update the element to reach the target
                }
                else
                {
                    cout << -1 << endl; // Can't reach the target using Type 2 operations
                    return 0;
                }
            }
        }

        cout << operations << endl;
    }

    return 0;
}