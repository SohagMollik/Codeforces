#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool f1=n%2;
        bool f2=k%2;

        if(n<k)
            cout<<"NO"<<endl;
        else if(f1==0&&f2==0){
                cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-(k-1)<<endl;
        }
         else if(f1==1&&f2==1){
                cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-(k-1)<<endl;
        }
        else if (f1==0&&f2==1){
            if(n/2>=k){
                    cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++){
                    cout<<2<<" ";
                    n-=2;
                }
                cout<<n<<endl;
            }

        else
            cout<<"NO"<<endl;
        }
        else if(f1==1&&f2==0){
            cout<<"NO"<<endl;
        }
    }
}
