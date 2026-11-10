#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int> pairs[1001];
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
    }
    
    int tc=1;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(1001,-1);
        for(int i=1;i<=n;i++){
            int value;
            cin>>value;
            a[value]=i;
        }
        int ans=-1;
        for(int value1=1;value1<=1000;value1++){
            if(a[value1]!=-1){
                for(auto value2 : pairs[value1]){
                    if(a[value2]!=-1){
                        int i=a[value1];
                        int j=a[value2];
                        ans=max(ans,i+j);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}