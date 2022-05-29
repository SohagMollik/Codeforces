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
        int ar[n+3],br[n+3];
        for(int i=1;i<=n;i++)cin>>ar[i];
        for(int i=1;i<=n;i++)cin>>br[i];
        vector<pair<int,int> >ans;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(ar[j]>ar[j+1] || br[j]>br[j+1])
                {
                    swap(ar[j],ar[j+1]);
                    swap(br[j],br[j+1]);
                    ans.pb({j,j+1});
                }
            }
        }
        int an=0;
        for(int i=1;i<n;i++)
        {
            if(ar[i]>ar[i+1] || br[i]>br[i+1])
            {
                an=-1;
                break;
            }
        }
        if(an!=0)cout<<-1<<nn;
        else
        {
            cout<<ans.size()<<nn;
            for(int i=0;i<ans.size();i++)cout<<ans[i].f<<" "<<ans[i].s<<nn;
        }
    }

    return 0;
}

