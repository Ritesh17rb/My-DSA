#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isValidParenthesis(string s)
{

stack<char>st;
st.push('c');
// cout<<st.top()-s[0]<<endl;
for(int i=0;i<s.size();i++){
    if(abs(st.top()-s[i])==1||abs(st.top()-s[i])==2){
       st.pop();
    }
    else{
        st.push(s[i]);
    }
    
}
if(st.size()==1&&st.top()=='c'){
    return true;
}
else{
    return false;
}
// cout<<"size "<<st.size()<<endl;

// if(st.size())return true;
// return false;

}

int main(){
    string s="{()}][";

//  cout<<s.size()<<endl;
    cout<<isValidParenthesis(s);
    // cout<<s.size();
  

    
    return 0;
}