#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if((k*2)-(n*2)>0){
            cout<<(k*2)-(n*2)<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}