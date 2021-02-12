#include<bits/stdc++.h>
using namespace std;
vector<int>s;
vector<int>::iterator it;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,k;
       cin>>n;
       int a[n],b[n],d[n];
       for(int i=0;i<n;i++){
          cin>>a[i];
       }
      for(int i=0;i<n;i++){
          b[i]=a[i];
       }
      int x;
      bool flag=true;
        for(int i=0;i<n;i++){
            int c=0;
        for(int j=0;j<n;j++){
                if(a[i]==a[j])c++;

        }
        if(c==1){
            //d[x]=a[i];
            //x++;
            x=a[i];
            s.push_back(x);
            //cout<<a[i]<<" ";
        }
        /*else if(c==0)flag=false;
        }
        if(flag==false)cout<<-1<<endl;
        else{
        int s=sizeof(d)/sizeof(d[0]);
    for(int i=0;i<s;i++){
          cout<<d[i]<<" ";
       }

   cout<<endl;
        }*/
   }
   for(it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
   }
           cout<<endl;

}
}
