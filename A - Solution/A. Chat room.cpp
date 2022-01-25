#include<bits/stdc++.h>
using namespace std;
char s[10]="hello",a;
int i;
int main()
{

    while(scanf("%c",&a)&&a!='\n'){
       if(a==s[i]){
        i++;
       }
    }
    if(i==5)
    cout<<"YES\n";
    else cout<<"NO\n";
}
