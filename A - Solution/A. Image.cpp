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
    while(t--)
    {
       set<char>st;
      char a[3][3];
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
            st.insert(a[i][j]);
        }
      }

        if(st.size()==4)cout<<3<<nn;
        else if(st.size()==3)cout<<2<<nn;
        else if(st.size()==1)cout<<0<<nn;
        else if(st.size()==2)cout<<1<<nn;
    }

    return 0;
}

