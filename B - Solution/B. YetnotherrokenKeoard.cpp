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
        string st;
        cin>>st;

        vector<int>v,vec;

        for(int i=0;i<st.size();++i){
            if((st[i] != '#' && st[i] != 'b') && (st[i]>='a' && st[i]<='z')){
                v.pb(i);
            }

            else if((st[i] != '#' && st[i] != 'B') && (st[i]>='A' && st[i]<='Z')){
                vec.pb(i);
            }

            else{

            if(i == 0 && st[i]=='b'){
                st[i] = '#';
            }

            else if(i == 0 && st[i]=='B'){
                st[i] = '#';
            }

            else if(i != 0 && st[i]=='b'){

                    if(v.size() !=0){
                      st[v[v.size()-1]] = '#';
                      v.pop_back();
                    }

                      st[i] = '#';
               }

            else if(i!=0 && st[i]=='B'){

                if(vec.size() !=0){
                st[vec[vec.size()-1]] = '#';
                vec.pop_back();
                }

                st[i] = '#';
            }

        }


    }

    if(st.size()==count(st.begin(), st.end(), '#'))cout<<nn;

    else {

            string ans="";
            for(int i=0;i<st.size();++i){
                if(st[i] != '#') ans+=st[i];
            }
            cout<<ans<<nn;
       }

    }

    return 0;


}

