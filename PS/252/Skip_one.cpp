#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int coin_needed=0;
        int coupon=0;
        int ans=0;
        for(int i=0;i<n;i++){
            coupon=max(coupon,a[i]);
            if(coin_needed+a[i]-coupon<=k){
                ans++;
                coin_needed+=a[i];
            }
            else{
                break;
            }
            
        }
        cout<<ans<<endl;
    }
}
