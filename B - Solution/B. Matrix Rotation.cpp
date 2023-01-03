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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
            int w=c;
            int x=a;
            int y=d;
            int z=b;

            int e=y;
            int f=w;
            int g=z;
            int h=x;

            int i=g;
            int j=e;
            int k=h;
            int l=f;

        if(a<b && c<d && a<c && b<d)yes
        else if(w<x&&y<z&&w<y&&x<z)yes
        else if(e<f&&g<h&&e<g&&f<h)yes
        else if(i<j&&k<l&&i<k&&j<l)yes
        else no
    }

    return 0;
}

