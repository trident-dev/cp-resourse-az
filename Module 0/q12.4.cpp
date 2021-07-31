#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b, c=0, d;
	cin>>a;
	ll arr1[a], arr2[a];
	vector <int> arr;
	
	for(ll i=0; i<a; i++){
		cin>>arr1[i];
	}
	for( int i=0; i<a; i++){
		cin>>arr2[i];
		arr.push_back(arr1[i]-arr2[i]);
	}
	sort(arr.begin(), arr.end());
	for(ll i=0; i<a; i++){
		b = upper_bound(arr.begin(), arr.end(), -arr[i]) - arr.begin();
		c+= max(0ll, i-b);
		
	}
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
