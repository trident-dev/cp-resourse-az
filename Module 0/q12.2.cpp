#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c =0, d;
	cin>>a;
	map <int, int> m;
	int arr[a];
	for( int i=0; i<a; i++){
		cin>>arr[i];
		m[arr[i]]++;
	}
	for( auto i:m){
		if(i.second > i.first)
			c+=(i.second - i.first);
		else if(i.second<i.first)
			c+=i.second;
	}
	cout<<c<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
