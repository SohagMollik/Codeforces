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


    vector<int>v(4);
    string st;
    cin>>st;
    for(int i=0;i<st.size();++i)
    {
      if(st[i]>='A' && st[i]<='Z'){
        v[0]=1;
      }

      if(st[i]>='a' && st[i]<='z'){
        v[1]=1;
      }

      if(st[i]>='0' && st[i]<='9'){
        v[2]=1;
      }

      if(st[i]=='!'  ||  st[i]=='@' || st[i]=='#' || st[i]=='*' || st[i]=='(' || st[i]==')' || st[i]=='[' || st[i]==']' || st[i]=='{' || st[i]=='}'){
        v[3]=1;
      }

    }

  if(st.size()<10)no;

  else if(st.size()>=10 && st.size()<20){
    if((v[0]==1 && v[1]==1 && v[2]==1 && v[3]==1))yes;
    else no;
  }

   else if((st.size()>=20)){
   if((count(v.begin(), v.end(),1)>=2) && (v[2]==1 || v[3]==1))yes;
    else no;
   }

   else no;

    return 0;
}

