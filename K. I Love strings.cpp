#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    if(len1==len2){
       for(int i=0;i<len1&&len2;i++){
            cout<<s1[i];
            cout<<s2[i];
        }
    }
    else{
            for(int i=0;i<len1&&len2;i++){
            cout<<s1[i];
            cout<<s2[i];
        }
       if(len1>len2){

            for(int i=len2+1;i<len1-1;i++)
                cout<<s1[i];
       }
        else{
           for(int i=len1+1;i<len2-1;i++)
                cout<<s2[i];
        }
    }
 return 0;
}
