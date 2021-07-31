#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	multiset <int> ms;
	int a, b, c, d;
	cin>>a>>b;
	for(int i =0; i<a; i++){
		cin>>c;
		ms.insert(c);
	}
	for( int i =0; i<b; i++){
		cin>>c;
		if(ms.count(c))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		ms.insert(c);
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
