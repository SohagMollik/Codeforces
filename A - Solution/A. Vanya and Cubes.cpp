#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum=0,ok,c=0;
    for(int i=1;i<=n;i++){
        ok=(i*(i+1))/2;
        sum+=ok;
        if(sum<=n){
            c++;
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
