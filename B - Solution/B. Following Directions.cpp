#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string st;
    cin>>st;
    int x=0,y=0;
    bool ans=false;
    for(int i=0;i<n;++i){
        if(st[i]=='U'){
            y+=1;
            if(x==1 && y==1){
                ans=true;
                yes
                break;
            }
        }
        else if(st[i]=='D'){
            y-=1;
              if(x==1 && y==1){
                ans=true;
                yes
                break;
            }
        }
        else if(st[i]=='R'){
            x+=1;
            if(x==1 && y==1){
                ans=true;
                yes
                break;
            }
        }
        else if(st[i]=='L'){
            x-=1;
            if(x==1 && y==1){
                ans=true;
                yes
                break;
            }
        }
    }
    if(ans==false)no
    }
    return 0;
}

