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
        if(n==2)cout<<2<<nn<<"1 2\n";
        else if(n==3)cout<<3<<nn<<"2 1 3\n";
        else{
            cout<<2<<nn;
            int s,x=1;
            cout<<"1 ";
            while(x<=n){
                        x=(x*2);
                       if(x<=n){
                        cout<<x<<" ";
                       }
            }
            for(int i=3;i<=n;i+=2){
                    int temp=i;
                    cout<<i<<" ";
                    while(i<=n){
                        s=(i*2);
                       if(s<=n){
                        cout<<s<<" ";
                       }
                      i=s;
                }
            i=temp;
            }
            cout<<nn;
        }
    }

    return 0;
}

