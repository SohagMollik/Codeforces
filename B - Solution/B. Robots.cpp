#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(auto &z: v){
           cin>>z;
        }
        int x=-1,y=-1;
        for(int ii=0;ii<m;ii++)
        {
            for(int j=0;j<n;j++){
                if(v[j][ii]=='R')
                {
                    x=ii;
                    y=j;
                    break;
                }
            }

            if(x!=-1)break;
        }

      //  cout<<y<<endl;

        bool ok=true;
        for(int k=0;k<y;k++)
        {
            for(int l=0;l<m;l++)
            {
                if(v[k][l]=='R'){ok=false;break;}
            }
        }
        if(ok==true)cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}


