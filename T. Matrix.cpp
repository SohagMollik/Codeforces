#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n],i,j,sum1=0,sum2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        sum1+=a[i][i];
        sum2+=a[i][n-i-1];
    }
    cout<<abs(sum1-sum2)<<endl;
}
