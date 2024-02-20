/*
****************************************************************
    __author__ : Sohag Mollik

****************************************************************
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>st;
        while(n--){
            string s;
            cin>>s;

            int c=count(s.begin(),s.end(),'1');
            if(c!=0){
            st.insert(c);
            }
        }

        if(st.size()==1)cout<<"SQUARE\n";
        else cout<<"TRIANGLE\n";

    }



    return 0;
}

