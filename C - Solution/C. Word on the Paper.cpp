#include<bits/stdc++.h>
#define nn   "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        char arr[10][10];

        for(int i=0;i<8;++i){
            for(int j=0;j<8;++j){
                cin>>arr[i][j];
            }
        }

        string st="";

          for(int i=0;i<8;++i){
            for(int j=0;j<8;++j){
                if(arr[i][j]>= 'a' && arr[i][j]<= 'z'){
                    st.push_back(arr[i][j]);
                }
            }
        }

        cout<<st<<nn;

    }

    return 0;
}

