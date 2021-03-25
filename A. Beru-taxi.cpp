#include<bits/stdc++.h>
using namespace std;
vector<double>vec;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,n;
    cin>>a>>b>>n;
    while(n--){
        double x,y,v;
        cin>>x>>y>>v;
        double ok=sqrt((a-x)*(a-x) + (b-y)*(b-y));
        double ans=ok/v;
        vec.push_back(ans);

    }
    sort(vec.begin(),vec.end());
    cout<<setprecision(6)<<fixed<<vec[0]<<endl;
}
