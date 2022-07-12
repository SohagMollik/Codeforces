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
       if(n%3==0)cout<<n/3<<" "<<(n/3)+1<<" "<<(n/3)-1<<nn;
       else{
        int x=(n/3)+2;
        int y=n-(x+(n/3));
        if(y==(n/3))cout<<(n/3)+1<<" "<<x<<" "<<(n/3)-1<<nn;
        else cout<<n/3<<" "<<x<<" "<<y<<nn;

       }
    }

    return 0;
}

