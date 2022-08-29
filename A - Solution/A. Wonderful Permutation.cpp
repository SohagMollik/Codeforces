#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
        }
        int ans=0;
        for(int i=0;i<k;++i){
            if(a[i]>k)
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
