#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='<'){
        if(a<b)
            cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }
    else if(s=='>'){
                if(a>b)
            cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }
    else if(s=='='){
                if(a==b)
            cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }
}
