#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    int ans=-1,yy;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++){
        mp[arr[i]]++;
}

    for (auto x : mp)
        {
        int xx=x.second;
        if(xx>=3){
        yy=x.first;
        ans=1;
        break;
        }
    }
    if(ans==1)
        cout<<yy<<endl;
    else
       cout<<"-1\n";
}

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
    countFreq(arr, n);
   }
    return 0;
}
