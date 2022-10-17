#include<bits/stdc++.h>
#define pb   push_back
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        vector<char>v;
        for(int i=n-1;i>=0; ){
            if(st[i]=='0'){
                string x=st.substr(i-2,2);
                int y=stoi(x);
             char ans=char(y+96);
              v.pb(ans);
                i-=3;

            }

            else{
                int z=st[i]-'0';
                char anss=char(z+96);
                v.pb(anss);
                i--;
            }
        }
        reverse(v.begin(),v.end());
        for(auto &k: v)cout<<k;
        cout<<endl;
    }

return 0;
}


