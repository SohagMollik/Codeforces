#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
   int a[n];
   int x=0,z=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ok=n-1;
    int y=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
           x+=max(a[y],a[ok]);
        else
           z+=max(a[y],a[ok]);

        if(a[y]>=a[ok])
            y++;

        else
            ok--;

    }

     cout<<x<<" "<<z<<endl;

return 0;
}
