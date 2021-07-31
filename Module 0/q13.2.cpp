#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b, c=0, d;
	cin>>a>>b;
	ll arr[a];
	map<ll, ll> mp;
	for(int i=0; i<a; i++){
		cin>>arr[i];
		c+=mp[arr[i]-b];
		c+=mp[b+arr[i]];
		mp[arr[i]]++;	
	}
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
