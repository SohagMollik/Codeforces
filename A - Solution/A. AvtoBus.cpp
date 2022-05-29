#include<bits/stdc++.h>
#define ll     long long int
#define pb   push_back
#define ull    unsigned long long
#define f     first
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
        ll n;
        cin>>n;
        if(n%2!=0||n<4)cout<<-1<<nn;
        else{
                ll x,y,z;
                 x=n/6;
                 y=n%6;
                 z=y/4;
                 if(y%4==0)
                 cout<<x+z<<" "<<n/4<<nn;
                 else cout<<x+z+1<<" "<<n/4<<nn;
        }
    }

    return 0;
}

