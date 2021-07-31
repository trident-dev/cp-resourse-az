##include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	int a, b, c, d;
	cin>>a>>b;
	int arr[a];
	for(int i=0; i<a;i++)
		cin>>arr[i];
	sort(arr, arr+a);
	int e = lower_bound(arr, arr+a, b) - arr;
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
