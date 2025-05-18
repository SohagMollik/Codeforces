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
    while(t--){
    int n;
    cin>>n;
    int a[n];

    int one=0, zero=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
        else zero++;
    }

    int ok=0;


    for(int i=1;i<n;i++){
        if(a[i]==0 && a[i-1]==0){
            ok=1;
            break;
        }
    }



    if(ok==1)yes;
    else if(one==n)yes;
    else no;


    }

    return 0;
}

