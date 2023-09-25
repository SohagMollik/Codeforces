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
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;++i){
            cin>>a[i];
        }

        int min_idx=0, max_idx=0;

        int mn=a[0], mx=a[0];

        for(int i=0;i<n;++i){
            if(mn>a[i]){
                mn=a[i];
                min_idx=i;
            }

             if(mx<a[i]){
                mx=a[i];
                max_idx=i;
            }
        }

        a[min_idx]= a[min_idx] +1;
        int ans=1;
        for(int i=0;i<n;++i){
            ans*=a[i];
        }

         a[min_idx]= a[min_idx] - 1;
         a[max_idx]= a[max_idx] +1;

        int ans1=1;
        for(int i=0;i<n;++i){
            ans1*=a[i];
        }


        cout<<max(ans,ans1)<<nn;
    }

    return 0;
}

