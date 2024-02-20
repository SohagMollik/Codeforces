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
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;

        int ans=0;

        for(int i=0;i<n; ++i){

           if(st[i]=='@')++ans;
          else if(st[i]=='*'){

            if(i !=(n-1)){
                if(st[i]=='*' && st[i+1]=='*') break;
            }

          }

        }

        cout<<ans<<nn;
    }



    return 0;
}

