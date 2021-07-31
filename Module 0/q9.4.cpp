#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	multiset <int> ms;
	int a, b, c, d;
	cin>>a;
	for( int i =0; i<a; i++){
		cin>>b;
		auto it = ms.upper_bound(b);
		if(it == ms.end()){
			ms.insert(b);

		}
		else{
			ms.erase(it);
			ms.insert(b);
		}
	}
	cout<<ms.size()<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
