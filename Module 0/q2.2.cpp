#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	long long sum =0;
	cin>>s;
	for(int i =0; i<s.length();i++){
		sum+= ((int)s[i] - '0');
	}
	cout<<sum<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
