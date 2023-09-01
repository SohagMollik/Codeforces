/*
****************************************************************
    __author__ : Sohag Mollik

 ******** Pari na kicu ********

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
        char st[10];
        cin>>st;
        string x;
        int y;
        vector<int>v;
        for(int i=0;i<8;++i){
            for(int j=i+1;j<9;++j){
                x+=st[i];
                x+=st[j];
                int c=0;
                y= stoi(x);
                for(int k = 2; k*k<=y ; ++k){
                    if(y%k==0)c++;
                }
                if(c==0){
                   v.pb(y);
                }
                x.clear();
            }

        }

        cout<< *max_element(v.begin(),v.end()) <<nn;
        v.clear();
    }


    return 0;
}

