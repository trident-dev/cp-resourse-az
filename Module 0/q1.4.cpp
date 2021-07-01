#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin>>n;
	long long arr[n];
	long long ans  =0;
	for (int i =0; i<n; i++){
		cin>>arr[i];
		ans ^=arr[i];
	}
	cout<<ans<<endl;	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
