#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<string,int> m;
    for(int i=n-1;i>=0;i--){
        if(m[a[i]]==0){
            cout<<a[i]<<endl;
            m[a[i]]=1;
        }
    }
    return 0;
}