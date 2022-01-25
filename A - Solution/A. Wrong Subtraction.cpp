#include<iostream>
using namespace std;
int main()
{
    int n,k,rem;
    cin>>n>>k;
    while(k--){
        rem=n%10;
        if(rem!=0){
           n-=1;
        }
        else{
            n/=10;
        }
    }
    cout<<n<<endl;
}
