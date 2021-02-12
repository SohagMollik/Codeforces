#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char s;
    cin>>s;
   int bal=(int)s;
    if(bal>=65&&bal<=90){
            cout<<"ALPHA\n"<<"IS CAPITAL\n";
    }
   else if(bal>=97&&bal<=122){
      cout<<"ALPHA\n"<<"IS SMALL\n";
   }
 else{
    cout<<"IS DIGIT\n";
 }

}
