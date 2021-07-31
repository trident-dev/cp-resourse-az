#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b, c=0, d, e;
	map<ll, ll> mp;
	vector<pair<ll, ll>> notif;
	cin>>a>>b;
	for(int i=0; i<b; i++){
		cin>>c>>d;
		if(c==1){
			mp[d]++;
			notif.push_back({d, 0});
		}
		else if(c==2){
			if(mp.count(d))
				mp[d]=0;
			for(auto it:notif)
				if(it.first==d)
					it.second=1;
		}
		else if(c==3){
			for(int j=0; j<d; j++){
				notif[j].second =1;
				//e = mp[notif[j].first];
				//e--;
				mp[notif[j].first]--;
				if(mp[notif[j].first] <0)
					mp[int(notif[j].first)]= 0;
			}
		}
		c=0;
		for(auto it:mp){
			c+=it.second;
		}
		cout<<c<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
