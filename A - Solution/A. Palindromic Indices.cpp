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
        int n,idx;
        cin>>n;
        string s,left;
        cin>>s;
        if(n&1)
        {
            idx=n/2;
            int ans=0;
            for(int i=idx;i>=0;i--)
            {
                if(s[idx]!=s[i])break;
                else ans++;
            }
            for(int j=idx+1;j<n;j++)
            {
                if(s[idx]!=s[j])break;
                else ans++;
            }
            cout<<ans<<nn;

        }
        else {
             idx=(n/2)-1;
            int ans=0;
            for(int i=idx;i>=0;i--)
            {
                if(s[idx]!=s[i])break;
                else ans++;
            }
            for(int j=idx+1;j<n;j++)
            {
                if(s[idx]!=s[j])break;
                else ans++;
            }
            cout<<ans<<nn;
        }
    }

    return 0;
}

