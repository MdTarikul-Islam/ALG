#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,p;
	    cin>>x>>y>>p;
	    int ans=0;
	    while(x*y<p){
	        if(x>=y){
	            y++;
	        }
	        else{
	            x++;
	        }
	        ans++;
	    }
	    cout<<ans<<endl;
	}

}
