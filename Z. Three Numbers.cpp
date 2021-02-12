#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,s,a,b,c,cnt=0;
    cin>>k>>s;
    for(a=0;a<=s;a++){
        for(b=0;b<=s;b++){
            for(c=s;c>=0;c--){
                if((a+b+c)==s){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
