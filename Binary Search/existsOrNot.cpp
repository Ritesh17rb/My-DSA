#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int arr[]={1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool res=binary_search(arr,arr+n,2);
    cout<<res<<endl;
//Lower Bound

int ind=lower_bound(arr,arr+n,2)-arr;
int india=upper_bound(arr,arr+n,2)-arr;

cout<<ind<<endl;
cout<<india<<endl;


    return 0;
}