#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define nn "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    string x,y,z;
    getline(cin,x);
    getline(cin,y);
    getline(cin,z);
    int first=0,second=0,third=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')first++;
    }
     for(int i=0;i<y.size();i++){
        if(y[i]=='a'||y[i]=='e'||y[i]=='i'||y[i]=='o'||y[i]=='u')second++;
    }
     for(int i=0;i<z.size();i++){
        if(z[i]=='a'||z[i]=='e'||z[i]=='i'||z[i]=='o'||z[i]=='u')third++;
    }
    if(first==5&&second==7&&third==5)yes;
    else no;
    return 0;
}
