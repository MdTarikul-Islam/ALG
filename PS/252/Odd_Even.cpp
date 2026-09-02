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
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        int ans;
        if(even==odd){
            ans=even+odd;
        }
        else if(even>odd){
            ans=2*odd+1;
        }
        else if(odd>even){
            ans=2*even+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}