#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        int a[n];
        int ans=0;
        int rem=n;

        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int i=0;
        while(m.size()!=rem){
            ans++;
            m[a[i]]--;
            if(m[a[i]]==0){
                m.erase(a[i]);
            }
            i++;
            rem--;
        }
        cout<<ans<<endl;
    }
    return 0;
}