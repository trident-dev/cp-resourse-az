#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b,c,d, e=0;
	cin>>a>>b;
	set<int> st;
	ll arr[a];
	for( ll i=0; i<a; i++){
		cin>>c;
		//d = min(c+b, c-b);
		d =  c%b;
		while(st.count(d))
			d+=b;
		st.insert(d);
		for(int j=e; ;j++){
			if(st.count(j)==0){
				e=j;
				cout<<e<<" ";
				break;
			}
		}
	}
	cout<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
