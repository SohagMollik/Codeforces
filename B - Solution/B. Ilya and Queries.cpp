#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    char s[100005];
    cin>>s;
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        char a[100005];
        int k=1;
        for(int i=x;i<=y;i++){
            a[k++]=s[i];
        }
        for(int z=1;z<=k;z++){
            cout<<a[z];
        }
        cout<<endl;
//        int c=0;
//        for(int i=x;i<=y;i++){
//            if(s[i]==s[i+1])c++;
//        }
//        cout<<c<<endl;
   }

    return 0;
}

