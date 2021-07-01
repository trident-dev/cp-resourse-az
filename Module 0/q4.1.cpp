#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n, ans=0, i;
	cin>>n;
	while(n>0){
		ans+=(n/5);
		n=n/5;
	}
	cout<<ans<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
