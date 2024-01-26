#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s="India";
 

    int i=0,j=s.size()-1;
    while(i<j){
       swap(s[i],s[j]);
       i++;
       j--;
    }
 cout<<s;

    return 0;
}