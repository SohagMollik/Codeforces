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
        int n,m,x,mx=-1,mx1=-1,y;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mx=max(mx,x);
        }
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>y;
            mx1=max(mx1,y);
        }
        for(int k=0;k<2;k++){
        if(k==0){
        if(mx>=mx1) cout<<"Alice\n";
        else cout<<"Bob\n";
         }
        if(k==1){
        if(mx1>=mx)cout<<"Bob\n";
        else cout<<"Alice\n";

        }
        }
    }

    return 0;
}

