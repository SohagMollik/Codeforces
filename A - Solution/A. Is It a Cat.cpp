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
    while(t--)
    {
        int n;
        cin>>n;
        string st;
        cin>>st;
       transform(st.begin(),st.end(),st.begin(), ::tolower);
       auto it=unique(st.begin(),st.begin()+st.size());
       st.resize(distance(st.begin(),it));
       if(st.size()==4 && st[0]=='m' && st[1]=='e' && st[2]=='o' && st[3]=='w')yes
        else no

    }

    return 0;
}

