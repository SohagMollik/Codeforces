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
    while(t--){
        string st;
        cin>>st;
        if(st[1]=='b'){
            cout<<st[0]<<" ";
            for(int i=1;i<st.size()-1;++i){
                cout<<st[i];
            }
            cout<<" "<<st[st.size()-1]<<nn;
        }
        else{
            cout<<st[0]<<" "<<st[1]<<" ";
            for(int i=2;i<st.size();++i){
                cout<<st[i];
            }
            cout<<nn;
        }
    }

    return 0;
}

