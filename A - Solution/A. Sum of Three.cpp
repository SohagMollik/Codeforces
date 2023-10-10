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


    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=6 || n==9)no;
        else{
            if((n-3)%3==0)
            {
                    cout<<"YES\n"<<1<<" "<<4<<" "<<n-5<<nn;

            }
            else if((n-3)%3!=0){
                    cout<<"YES\n"<<1<<" "<<2<<" "<<n-3<<nn;
            }
        }
    }

    return 0;
}
