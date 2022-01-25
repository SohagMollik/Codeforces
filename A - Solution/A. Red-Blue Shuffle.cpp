#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s1[i]>s2[i])x++;
            else if(s1[i]<s2[i])y++;

        }
        if(x>y)cout<<"RED\n";
        else if(x<y)cout<<"BLUE\n";
        else cout<<"EQUAL\n";


    }
}
