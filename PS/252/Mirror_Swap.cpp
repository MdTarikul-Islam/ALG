#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n*2+1];
        for(int i=1;i<=n*2;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            int cur=a[i];
            int mirror=a[2*n+1-i];
            ans +=max(cur,mirror);
        }
        cout<<ans<<endl;
    }
    return 0;
}