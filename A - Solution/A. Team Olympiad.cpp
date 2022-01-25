#include<bits/stdc++.h>
using namespace std;
vector<int>v1;
vector<int>v2;
vector<int>v3;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool ok=true;
    bool sk=true;
    bool mk=true;
    for(int i=0;i<n;i++){
        if(a[i]==1)ok=false;
        else if(a[i]==2)sk=false;
        else if(a[i]==3)mk=false;

    }
        for(int i=0;i<n;i++){
            if(a[i]==1){
             v1.push_back(i);
            }
            else if(a[i]==2){
             v2.push_back(i);
            }
            else if(a[i]==3){
             v3.push_back(i);
            }

        }

    if(ok==true||sk==true||mk==true)cout<<0<<endl;
    else{
        int x=v1.size();
        int y=v2.size();
        int z=v3.size();
        int ans=min(x,y);
        int result=min(ans,z);
        cout<<result<<endl;
        for(int i=0;i<result;i++){
            cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<endl;
        }
    }
}
