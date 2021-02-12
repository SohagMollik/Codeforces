#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    int i=s1[0];
    int j=s2[0];
    s1[0]=j;
    s2[0]=i;
    cout<<s1<<" "<<s2<<endl;
}
