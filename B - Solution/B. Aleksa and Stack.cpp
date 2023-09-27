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
        int n;
        cin>>n;
        int i=1;
        while(n--){
            cout<<i<<" ";
            i+=2;
        }
        cout<<nn;
    }

    return 0;
}

