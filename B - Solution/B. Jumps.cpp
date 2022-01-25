#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int sum=0,c=0;
        for(int i=1;i<=x;i++){
                c++;
                sum+=i;
        if(sum==x)break;
        else if(sum>x){
                    sum-=1;
           if(sum==x)break;
           else continue;
        }

        }
        cout<<c<<endl;
    }
}
