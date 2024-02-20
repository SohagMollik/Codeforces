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

        int a=0,b=0;
        for(int i=0;i<st.size();++i){
            if(st[i]=='A')++a;
            else ++b;
        }

        if(a>b)cout<<"A\n";
        else cout<<"B\n";
    }


    return 0;
}

