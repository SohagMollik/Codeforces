#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int ok=sqrt(t);
    int c=0;
    set<int>s;
    for(int i=1;i<=ok;i++){
      if(t%i==0){
        s.insert(i);
        s.insert(t/i);
      }
    }
    cout<<s.size()-1<<endl;
    return 0;
}
