/*
****************************************************************
    __author__ : Sohag Mollik

****************************************************************
*/

#include <bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n")
#define no   printf("NO\n")
using namespace std;

int main()
{


    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
      int n = st[1]-'0';

      for(int i=n+1;i<9;++i){
        cout<<st[0]<<i<<nn;
      }

      for(int i=n-1;i>=1;--i){
        cout<<st[0]<<i<<nn;
      }

      for(char k=st[0]+1; k<'i'; ++k){
        cout<<k<<n<<nn;
      }

      for(char k=st[0]-1; k>='a'; --k){
        cout<<k<<n<<nn;
      }

    }


    return 0;
}

