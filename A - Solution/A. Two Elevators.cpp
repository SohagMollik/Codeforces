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
    int a,b,c;
    cin>>a>>b>>c;
    if(c==1){
        int d=abs(1-a);
        int e=abs(b-c);
        if(d<e)cout<<1<<nn;
        else if(d>e)cout<<2<<nn;
        else cout<<3<<nn;
    }
    else{
        int g=abs(a-1);
        int h=(abs(b-c)+abs(1-c));
        if(g<h)cout<<1<<nn;
        else if(g>h)cout<<2<<nn;
        else cout<<3<<nn;
    }
    }
    return 0;
}

