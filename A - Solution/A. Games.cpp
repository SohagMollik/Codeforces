#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[2*n],b[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }

    int c=0;
    for(int i=0;i<2*n;i+=2){
        for(int j=1;j<2*n;j+=2){
            if(a[i]==a[j])
                c++;
        }
    }
    cout<<c<<endl;
}
