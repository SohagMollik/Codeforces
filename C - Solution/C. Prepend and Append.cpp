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
        int i=0;
        int j=n-1;
        while(i<j){
            if((st[i]=='1' && st[j]=='1')||(st[i]=='0' && st[j]=='0'))
            {
                break;
            }
            else if((st[i]=='1' || st[i]=='0') && (st[j]=='1' || st[j]=='0')){
                n-=2;
            }
            i++;
            j--;

        }
        cout<<n<<nn;

    }

    return 0;
}

