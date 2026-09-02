#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int v=0;
        while(n--){
            int vt;
            cin>>vt;
            if(vt>=x){
                v++;
            }
        }
        cout<<v<<endl;
    }
    return 0;
}