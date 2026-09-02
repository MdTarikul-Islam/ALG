#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int mx=0;
            for(int j=i+1;j<n;j++){
                mx=max(mx,a[j]);
            }
            if(a[i]<=mx){
                ans=max(ans,a[i]+mx);
            }
            else{
                ans=max(ans,a[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}