#include<bits/stdc++.h>
using namespace std;
int a[5];
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        a[x]++;
    }
    cout<<a[4]+a[3]+(max(a[1]-a[3],0)+a[2]*2+3)/4<<endl;

}
