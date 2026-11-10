#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int p=0;
        int ans=0;
        for(int i=0;i<n;i++){
            p+=a[i];
            int hn=p*(p-1)/2;
            if(hn<=m){
                ans++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}
