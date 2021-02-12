#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,l;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(l=0;;l++){
        for(i=0;i<n;i++){
            if(a[i]&1){
                cout<<l<<endl;
                return 0;
            }
            a[i]/=2;
        }
    }
    return 0;

}
