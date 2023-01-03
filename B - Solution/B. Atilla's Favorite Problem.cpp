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
    while(t--)
    {
        int n;
        cin>>n;
        string st;
        cin>>st;
        int mx=-1;
        for(int i=0;i<n;++i){
            int x=int(st[i]);
            mx=max(mx,x);
        }
        cout<<(mx-96)<<nn;
    }

    return 0;
}
