#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    multiset<int> s;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    // auto it=s.begin();
    // cout<<*it<<'\n';

    for(auto value:s){
        cout<<value<<" ";
    }
    cout<<'\n';
    return 0;
}