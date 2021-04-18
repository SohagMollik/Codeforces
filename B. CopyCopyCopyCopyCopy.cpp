#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
        s.clear();
    }
    return 0;
}
