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


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    map<int,int>mp;
    for(auto &x: a){
        mp[x]++;
    }

    int mx=0;
    for(auto &x: mp){
        mx=max(mx, x.s);
    }

    cout<<mx<<nn;

    return 0;
}

