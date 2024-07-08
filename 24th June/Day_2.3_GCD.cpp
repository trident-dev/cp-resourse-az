#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, b;
	cin>>a>>b;
	if(a>b){b = b+a;a=b-a;b=b-a;}
	long long c=a+1;
	while(c-->=0){
		if(a%c==0 & b%c==0){
			cout<<c<<endl;
			return;
		}

	}

	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// int t; cin>> t; while(t--)
	solve();
}
