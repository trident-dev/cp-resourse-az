#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a,b;
	int c=0;
	int e=0;
	long double d;
	cin>>a;
	ll arr1[a], arr2[a];
	map<double, int> mp;
	for(int i=0; i<a; i++)
		cin>>arr1[i];
	for(int i=0; i<a; i++){
		cin>>arr2[i];
		if(arr1[i]){
			d = (-1.0*arr2[i])/arr1[i];
			mp[d]++;
		}
		else if(arr2[i] == 0)
			e++;
	}
	for(auto it:mp){
		c = max(c, it.second);
	}
	c+=e;
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
