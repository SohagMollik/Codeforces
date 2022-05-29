#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    vector<string>v;
    while(n--)
    {
        string st;
        cin>>st;
        v.pb(st);
    }
    cout<<"no\n";
    for(int i=1;i<v.size();i++)
    {
        int ans=0;
        for(int j=i-1;j>=0;j--){
            if(v[i]==v[j]){
            ans=1;
            continue;
            }
        }
        if(ans==1) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}

