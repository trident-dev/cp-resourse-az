#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n; cin>>n;
	long long arr[n], max = INT_MIN;
	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i =0; i<n; i++){
		// cin>>arr[i];
		if(arr[i]>max) max = arr[i];
	}
	cout<<max<<endl;
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// int t; cin>> t; while(t--)
	solve();
}
