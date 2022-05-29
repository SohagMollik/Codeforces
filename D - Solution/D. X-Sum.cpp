#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
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
       int n,m;
       cin>>n>>m;
       int a[n][m];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];
           }
       }

       int mx=-1;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               int p=0;
               int rowi=i;
               int colj=j;
               int sub=a[i][j];
               while(rowi>=0&&rowi<n&&colj>=0&&colj<m)
               {
                   p+=a[rowi][colj];
                   rowi--;
                   colj--;

               }
               rowi=i;
               colj=j;
               while(rowi>=0&&rowi<n&&colj>=0&&colj<m)
               {
                   p+=a[rowi][colj];
                   rowi++;
                   colj--;

               }
               rowi=i;
               colj=j;
               while(rowi>=0&&rowi<n&&colj>=0&&colj<m)
               {
                   p+=a[rowi][colj];
                   rowi--;
                   colj++;

               }

               rowi=i;
               colj=j;
               while(rowi>=0&&rowi<n&&colj>=0&&colj<m)
               {
                   p+=a[rowi][colj];
                   rowi++;
                   colj++;

               }

               mx=max(mx,p-(3*sub));
           }
       }

       cout<<mx<<nn;
    }

    return 0;
}

