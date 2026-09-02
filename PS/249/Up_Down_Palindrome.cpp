#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int L=0,R=n-1;
        string ans="No";
        int increse_Max=0,reduce_Min=2e9;
        int flag=0;
        while(L<=R){
            if(a[L]!=a[R]){
                int diff=abs(a[L]-a[R]);
                if(diff==2){
                    if(a[L]>a[R]){
                        reduce_Min=min(reduce_Min,a[L]);
                        increse_Max=max(increse_Max,a[R]);
                    }
                    else{
                        reduce_Min=min(reduce_Min,a[R]);
                        increse_Max=max(increse_Max,a[L]);
                    }
                }
                else{
                    ans="No";
                    flag=1;
                    break;
                }
            }
            L++,R--;
        }
        if(flag==0 && increse_Max<reduce_Min) ans="Yes";
        cout<<ans<<endl;
    }

}
