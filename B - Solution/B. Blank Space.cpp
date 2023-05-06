#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;++i){
            scanf("%d",&a[i]);
        }
        int zero=0;
        int mx=0;
        for(int i=0;i<n;++i){
            if(a[i]==0)
            {
                zero++;
                mx=max(zero,mx);
            }
            else {
                    mx=max(zero,mx);
                    zero=0;
            }
        }
        printf("%d\n",mx);
    }

    return 0;
}

