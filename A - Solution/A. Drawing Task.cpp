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

    int n,m,q;
    cin>>n>>m>>q;
    char grid[n+2][m+2];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            grid[i][j]='.';
        }
    }

  while(q--)
  {
      int r1,c1,r2,c2;
      char c;
      cin>>r1>>c1>>r2>>c2>>c;

      for(int i=min(r1,r2)-1; i<max(r1,r2);++i){
        for(int j= min(c1,c2)-1; j<max(c1,c2);++j){
            grid[i][j]=c;
        }
      }
  }
  for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
           cout<<grid[i][j];
        }
        cout<<nn;
    }


    return 0;
}

