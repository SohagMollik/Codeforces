#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
set<char>b;
int main()
{
    string s;
    getline(cin,s);
    for(int i=1;i<=s.size()-2;i+=3){
    b.insert(s[i]);
    }
    cout<<b.size()<<endl;

    //cout<<b.size()-2<<endl;
    //cout<<s<<endl;

}

