#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int first=n%10;
	int second=n/10;
	if(first !=second){
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
}
