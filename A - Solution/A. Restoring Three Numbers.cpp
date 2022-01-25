#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    int x=a[3]-a[2];
    int y=a[3]-a[1];
    int z=a[3]-a[0];
    cout<<x<<" "<<y<<" "<<z<<endl;
}
