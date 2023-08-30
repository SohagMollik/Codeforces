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

   // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a,q;
        cin>>n>>a>>q;
        string st;
        cin>>st;

        int plus=a, m=0;
        int mx=a;
        for(int i=0;i<q;++i){
            if(st[i] == '+')
            {
                plus++;
                m++;
            }
            else
            {
                plus--;
            }

            mx = max(mx,plus);
        }
         if(n== mx)yes;
        else if(n<=(a+m)) cout<<"MAYBE\n";
        else no;

        }

    return 0;
}
