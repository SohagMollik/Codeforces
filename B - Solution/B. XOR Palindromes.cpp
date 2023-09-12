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
        int n;
        cin>>n;
        string st;
        cin>>st;

        int no_match=0, match_pair=0;
        int L=0, R=n-1;

        while(L < R)
        {
            if(st[L] == st[R]){
                    match_pair+=2;
            }
            else{
                no_match++;
            }

            L++;
            R--;

        }

        string ans="";

        for(int i=0;i<=n;++i){
            if(i==no_match)ans.pb('1');
            else if(i<no_match)ans.pb('0');
            else{

                int x = i - no_match;
                if(n%2 != 0){
                    if((match_pair == x) || (match_pair + 1 == x))ans.pb('1');
                    else if(x > match_pair)ans.pb('0');
                    else ans.pb('1');
                }

                else if(n%2 == 0){
                    if(x == match_pair)ans.pb('1');
                    else if(x > match_pair)ans.pb('0');
                    else if(x < match_pair){
                        if(x%2 == 0)ans.pb('1');
                        else ans.pb('0');
                    }
                }


            }
        }

        cout<<ans<<nn;


    }


    return 0;
}

