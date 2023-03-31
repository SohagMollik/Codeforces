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
        int a[n];
        int odd=0,even=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]%2!=0)odd+=a[i];
            else even+=a[i];
        }
        if(even>odd)yes
            else no

    }


    return 0;
}

