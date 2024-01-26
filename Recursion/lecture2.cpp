#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int fib(int n){  
  if(n==0||n==1){
    return n;
  }
 return fib(n-1)+fib(n-2);
 
}


void reachHome(int src,int dest){
    
cout<<"Source-->"<<src<<"Dest-->"<<dest<<endl;

  //Base case
  if(src==dest){
    cout<<"Reached Home"<<endl;
    return;

  }

   src++;
  //Recursive case

 
  reachHome(src,dest);

}

int main(){
fast_io;
// int dest;
// cin>>dest;
// int src=1;

// reachHome(src,dest);
    
    int n;
    cin>>n;
  //  for(int i=1;i<=n;i++){
  //   cout<<fib(n)<<" ";
  //  }

  // cout<<fib(n);

int m;
m=0,n=1;

int sum=0;


 


    return 0;
}