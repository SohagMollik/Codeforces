#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1,s2={0};
    cin>>s1;
    if(s1>='a'&&s1<='z')
        s2=(char)(s1-32);
    else
        s2=(char)(s1+32);

    cout<<s2<<endl;

}
