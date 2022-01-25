#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=1;
        cin>>n;
        vector<int>v;
        vector<int>::iterator it;
        while(n!=0){
            int mod=n%10;
            if(mod*m>0)
            v.push_back(mod*m);
            m*=10;
            n/=10;
        }
        cout<<v.size()<<endl;
        for(it=v.begin();it!=v.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}
