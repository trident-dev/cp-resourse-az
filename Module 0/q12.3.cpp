#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
//	cout<<"inside"<<endl;
	ll a, b, c=0, d;
	cin>>a;
	ll arr[a];
	multiset <ll> mset;
	for(int i=0; i<a; i++){
		cin>>arr[i];
		mset.insert(arr[i]);
	}
	while(mset.size()>1){
//		cout<<"Inside the loop"<<endl;
		auto it = mset.begin();
		d= *it;
		mset.erase(it);
		it = mset.begin();
		d+= *it;
		mset.erase(it);
		c+=d;
		mset.insert(d);
//		cout<<"multiset size: "<<mset.size()<<endl;
	}
//	cout<<"Outside the main loop"<<endl;
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
