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
        int y=n;
        set<int>s;
        while(n--)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
       if((y-s.size())&1)cout<<s.size()-1<<nn;
       else cout<<s.size()<<nn;
    }

    return 0;
}

