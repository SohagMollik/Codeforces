/*
****************************************************************
    __author__ : Sohag Mollik

 ******** Pari na kicu ********

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
        vector<int>a(n);

        vector<pair<int, int> >p;

        for(int i=0;i<n;++i){
            cin>>a[i];
           p.pb(make_pair(a[i], i));
        }

        sort(p.rbegin(), p.rend());

        int ans[n];

        for(int i=0; i<n; ++i){
            int index = p[i].s;
            ans[index] = i+1;
        }

        for(int i=0; i<n;++i){
                cout<<ans[i]<<" ";
        }
        cout<<nn;
    }

    return 0;
}

