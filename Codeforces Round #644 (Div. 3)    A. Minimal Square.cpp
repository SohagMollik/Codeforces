#include<bits/stdc++.h>
using namespace std;
int main (){
 int t;
 cin>>t;
 while(t--){
    int a,b,s,area;
    cin>>a>>b;
    if(a==1&&b==1){
        area=4;
    }
   else if(a%2==0&&b%2==0){
        if(a>b){
        s=b+b;
        area=s*s;
        }
        else{
            s=a+a;
           area=s*s;
        }
    }
    else if(a%2!=0&&b%2!=0){
       if(a>b){
        area=a*a;
        }
        else{

           area=b*b;
        }
    }
    else if(a%2!=0&&b%2==0||a%2==0&&b%2!=0){
         if(a>b){
        s=b+b;
        area=s*s;
        }
        else{
            s=a+a;
           area=s*s;
        }
    }
    else if(a==b){
         s=a+a;
        area=s*s;
    }

    cout<<area<<endl;
 }
}
