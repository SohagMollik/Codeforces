#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    if(len1>=len2)
        cout<<s2<<endl;
    else
        cout<<s1<<endl;
}
