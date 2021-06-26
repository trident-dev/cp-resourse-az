#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int mod = 1e9 + 7;

void solve(){
	long long a, b=1,c;
	cin>>a;
	long long d[a];
	for(int i =0; i<a;  i++){
		cin>>d[i];
		b = (b*d[i])%mod;
	}
	cout<<b<<endl;
		
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
