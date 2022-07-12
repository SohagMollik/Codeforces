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
        int one=0;
        for(int i=0;i<4;++i){
            int x;
            cin>>x;
            if(x==1)one++;
        }
        if(one==0)cout<<0<<nn;
       else if(one==4)cout<<2<<nn;
        else cout<<1<<nn;

    }

    return 0;
}

