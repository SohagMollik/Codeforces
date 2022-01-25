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
   string x, y;
    cin>>x;
    cin>>y;
    string  ok=("qwertyuiopasdfghjkl;zxcvbnm,./");
   if(x=="L") {
            int idx;
        for(int i=0;i<y.size();i++){
            for(int j=0;j<ok.size();j++){
                if(y[i]==ok[j]){
                    idx=j;
                }
            }
           cout<< ok[idx+1];
        }
    cout<<endl;
    }
    else{
        int idx;
        for(int i=0;i<y.size();i++){
            for(int j=0;j<ok.size();j++){
                if(y[i]==ok[j]){
                    idx=j;
                }
            }
            cout<<ok[idx-1];
        }
       cout<<endl;
    }


    return 0;
}
