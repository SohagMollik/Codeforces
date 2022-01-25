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
    int n;
    cin>>n;
    vector<int>v(n),v1,v2,v3,v4,v5,v6,v7;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v5=v;
    v6=v;
    v7=v;
    sort(v5.begin(),v5.end());
    reverse(v6.begin(),v6.end());
    if(n==1||v5==v)cout<<"yes\n"<<"1 1"<<endl;
    else if(n==2&&v[0]!=v[1])cout<<"yes\n"<<"1 2"<<endl;
    else if(v5==v6)cout<<"yes\n"<<1<<" "<<n<<endl;
    else{
        v1=v;
        for(int i=1;i<v1.size();i++){
            if(v1[i-1]>v1[i]){
                v2.pb(v1[i-1]);
                v3.pb(i-1);
            }

        }
        int xx=v3[v3.size()-1];
        v2.pb(v1[xx+1]);
        v3.pb(xx+1);
        reverse(v2.begin(),v2.end());

       int yy= v3[v3.size()-1];

       int first=v3[0];
        v.erase(v.begin()+first,v.begin()+yy+1);

        int k=0,pos,val,m;
        int start=v3[0];
        for(m=start;m<=yy;m++){
                 pos=m;
                val=v2[k];
                v.insert(v.begin()+pos,val);
                k++;
        }

      sort(v7.begin(),v7.end());
      bool ans=true;
      for(int w=0;w<v.size();w++){
        if(v[w]!=v7[w])ans=false;
    }
       if(ans==true){
        cout<<"yes\n";
        cout<<v3[0]+1<<" "<<v3[v3.size()-1]+1<<endl;
       }
       else cout<<"no\n";

    }

    return 0;
}
