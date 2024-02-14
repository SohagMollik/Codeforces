/*
****************************************************************
    __author__ : Sohag Mollik

****************************************************************
*/

#include <bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n")
#define no   printf("NO\n")
using namespace std;

int main()
{


    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int m=97;
        char arr[27];
        for(int i=1;i<27;++i){
            arr[i]=char(m);
            ++m;
        }


        if(n<=28){
                int pos=n-2;
            cout<<"aa"<<arr[pos]<<nn;
        }

        else{
        int a,b;
        for(int i=1;i<=26;++i){
             a=n-i;
            b=a-26;
            if(b>=1 && b<=26){
            cout<<arr[i]<<arr[b]<<arr[26]<<nn;
            break;
            }

        }

    }
}



    return 0;
}

