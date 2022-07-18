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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        map<char,int>mp;
        for(int i=0;i<=n-1;i++){
            char y=st[i];
            mp[y]++;
        }
        int sum=0;
        for(auto x: mp){
            int sc=x.s;
            if(sc>=1)sum+=(sc+1);

        }
        cout<<sum<<nn;
    }

    return 0;
}

