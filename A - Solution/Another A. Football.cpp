#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
 fast;
 int n;
 cin>>n;
 unordered_map<string,int>mp;
 vector<int>v;
 vector<string>vec;
 while(n--){
    string s;
    cin>>s;
    mp[s]++;
 }

for(auto z: mp){
        int temp=z.second;
         v.pb(temp);
         string mov= z.first;
         vec.pb(mov);
}
int index= max_element(v.begin(),v.end())-v.begin();
cout<<vec[index]<<endl;

    return 0;
}
