#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        string st;
        cin>>st;
        int ans=0;
        if(st[0]!='c')ans++;
        if(st[1]!='o')ans++;
        if(st[2]!='d')ans++;
        if(st[3]!='e')ans++;
        if(st[4]!='f')ans++;
        if(st[5]!='o')ans++;
        if(st[6]!='r')ans++;
        if(st[7]!='c')ans++;
        if(st[8]!='e')ans++;
        if(st[9]!='s')ans++;

       printf("%d\n",ans);
    }

    return 0;
}

