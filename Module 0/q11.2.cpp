#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a,b, c, d=0, e=0;
	vector <pair<int, int>> v;
	cin>>a;
	for(int i=0; i<a; i++){
		cin>>b>>c;
		v.push_back({b, 1});
		v.push_back({c, -1});
	}
	sort(v.begin(), v.end());
	for(auto i:v){
		if(i.second)
			d+=i.second;
		e = max(e, d);
	}
	cout<<e<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
