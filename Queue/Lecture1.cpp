#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
      queue<int>q;
      q.push(1);
      q.push(2);
      q.push(3);

      cout<<"Size--> "<<q.size()<<endl;

      cout<<"Front "<<q.front()<<endl;
      cout<<"Rear "<<q.back ()<<endl;

      deque<int>d;
      d.push_front(1);
      d.push_back(2);
      d.push_front(100);
      cout<<d.front();
    return 0;
}