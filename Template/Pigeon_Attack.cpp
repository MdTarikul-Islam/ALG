#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n>=k){
            cout<<k*3-(n-k)<<endl;
        }else{
            cout<<n<<endl;
        }
    }
    return 0;
}