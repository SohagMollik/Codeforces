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
        for(int i=0;i<n;++i)cin>>a[i];
        int x=10-n;
        if(x==2)cout<<6<<nn;
        else{
        int y=x-1;
        int i=1,sum=0;
        while(y--){
            sum+=(x-i)*6;
            i++;
        }
        cout<<sum<<nn;
        }

    }

    return 0;
}

