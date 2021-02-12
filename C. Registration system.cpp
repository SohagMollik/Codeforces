#include<bits/stdc++.h>
using namespace std;
int main()
{
 map<string,int>m;
 int n;
 cin>>n;
 while(n--){
    string s;
    cin>>s;
    if(m[s]>0)cout<<s<<m[s]<<endl;
    else {cout<<"OK\n";}
    m[s]++;
 }
}
