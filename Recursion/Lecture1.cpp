#include <bits/stdc++.h>
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
using namespace std;

int factorial(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    return n*factorial(n-1);

    // int smallProblem = factorial(n - 1);
    // int biggerProblem = n * smallProblem;
    // return biggerProblem;
}

int powerFunc(int n){
    //Base case
    if(n==0){
        return 1;
    }
    //Recursive case
    return 2*powerFunc(n-1);
}

void countFunc(int n){
    //Base case
    if(n==0){
        return;
    }
    //Recursive case
   
    countFunc(n-1);

     cout<<n<<" ";
}

int main()
{ 
    fast_io;

    int n;
    cin >> n;

    // int ans = factorial(n);
    // cout << ans << endl;



//Power of 2^n

// int power=powerFunc(n);
// cout<<"Power "<<power<<endl;


//Print Counting

countFunc(n);

    return 0;
}