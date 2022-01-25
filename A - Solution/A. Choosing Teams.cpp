#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(5-v[i]>=k)c++;
    }
    cout<<c/3<<endl;
    v.clear();
}
