#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;




void maxofK(int arr[],int k,int n){


    int maximum=INT_MIN;

    for(int i=0;i<=n-k;i++){
        
       maximum=arr[i];
       for(int j=1;j<k;j++){
        if(arr[i+j]>arr[i]){
            maximum=arr[i+j];
        }

       }
       cout<<"max-> "<<maximum<<endl;

    }

}


int main(){
fast_io;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    
    int k=3;

    maxofK(arr,k,n);



    return 0;
}