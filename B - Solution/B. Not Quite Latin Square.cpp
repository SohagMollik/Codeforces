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
    string st;

    for(int i=0;i<t;++i){
     for(int j=0;j<3;++j){
        cin>>st;

        auto it=st.find('?');
        if(it != string::npos){
           auto a=st.find('A');
           auto b=st.find('B');
           auto c=st.find('C');
            if(a == string::npos)cout<<"A\n";
            else if(b == string::npos)cout<<"B\n";
            else if(c == string::npos)cout<<"C\n";

        }
     }

    }

    return 0;
}

