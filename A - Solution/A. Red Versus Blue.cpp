#include<bits/stdc++.h>
#define ll   long long
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  cout<<"YES\n"
#define no   cout<<"NO\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int x=a/(b+1);
        int y=a%(b+1);
        while(b--)
        {
            int z=x;
            if(y!=0)z++,y--;
            for(int i=0;i<z;i++)cout<<"R";
            cout<<"B";
        }
        //if(y!=0)x++;
        for(int i=0;i<x;i++)cout<<"R";
        cout<<nn;

    }

    return 0;
}

