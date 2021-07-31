#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void print_map(map<char, set<int>> mp){
	for(auto it: mp){
		cout<<it.first<<" | ";
		for(auto it2: it.second)
			cout<<it2<<", ";
		cout<<endl;
	}
	cout<<endl<<endl;
}

void solve(){
	ll a,b,c,d,e, f;
	unorderd_map<char, set<int>> mp;
	string s;
	cin>>s;
	cin>>a;
	for(ll i=0; i<s.length(); i++){
		mp[s[i]].insert(i+1);
	}
	//print_map(mp);
	for(ll i=0; i<a; i++){
		cin>>b>>c;
		if(b==1){
			char cha;
			cin>>cha;
			char ch = s[c-1];
			mp[ch].erase(mp[ch].find(c));
			mp[cha].insert(c);
			s[c-1] = cha;
			//print_map(mp);
		}
		else if (b==2){
			cin>>d;
			f=0;
			for(auto it:mp){
				auto lb = lower_bound(it.second.begin(), it.second.end(), c);
				//cout<<"Lower bound value: "<<it.first<<" | "<< *lb<<endl;
				//e = (int)(lb - it.second.begin());
				if(*lb <=d && *lb>=c)
					f++;
			}
			cout<<f<<endl;
			//print_map(mp);
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
