#include <bits/stdc++.h>
//#include <tr1/unorderd_map>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

const int N = 100010;

void solve(){
	ll a, b, c, d, e;
	cin>>a>>b;
	int neg =0;
	if(a<0) neg^=1;
	if(b<0) neg^=1;

	string res ="";
	if(neg)
		res="-";
	c = a/b;
	res+=to_string(c);

	d = a%b;
	if(!d){
		cout<<res<<endl;
		return;
	}

	unordered_map <long long, long> mp;

	ll f=-1;
	while(true){
		if(!d)
			break;
		e = d*10;
		if(mp.find(d)!= mp.end()){
			f = mp[d];
			break;
		}
		mp[d] = (ll)res.length();
		c = e/b;
		res+=to_string(c);
		d = d%b;
	}

	if(f!=-1){
		int len = (int)res.length();
		res =  res.substr(0, f) + "(" + res.substr(f, len -f) + ")";
	}
	cout<<res<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}