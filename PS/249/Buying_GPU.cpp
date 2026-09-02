#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y>=z){
	        cout<<-1<<endl;
	    }
	    else{
	       double money_saved=z-y;
	       int ans=ceil(x/money_saved);
	        
	        cout<<ans<<endl;
	    }
	}

}
