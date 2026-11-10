#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int a[n+4];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(make_pair(a[i],i+1));
    }
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<j){
        if((v[i].first+v[j].first)>k){
            j--;
        }
        else if((v[i].first+v[j].first)<k){
            i++;
        }
        else if((v[i].first+v[j].first)==k){
            cout<<v[j].second<<" "<<v[i].second<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}