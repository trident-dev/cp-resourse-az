#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a,b,c,d,e, n;
	cin>>a>>n;
	ll arr[a];
	deque<ll> dq, dq2[a];
	for(ll i=0; i<a; i++){
		cin>>arr[i];
		dq.push_back(arr[i]);
	}
	for(ll i=0; i<a; i++){
		if(!dq.empty()){
			b = dq.front();
			dq.pop_front();
			c = dq.front();
			dq.pop_front();
			d = max(c,b);
			e = min(b,c);
			dq.push_back(e);
			dq.push_front(d);
			dq2[i] = dq;
		}
	}
	// for(auto it:dq2){
	// 	for(auto it2:it)
	// 		cout<< it2<<" ";
	// 	cout<<endl;
	// }
	// cout<<endl<<endl;
	for(ll i=0; i<n; i++){
		ll q;
		cin>>q;
		if(q<=a+1){
			if(q==1)
				cout<<arr[0]<<" "<<arr[1]<<endl;
			else
				cout<<dq2[q-2].front()<<" "<<*(dq2[q-2].begin()+1)<<endl;
		}
		else{
			ll h = (q-a)%(a-1);
			if(h==0)
				h=a-1;
			cout<<dq2[a-1].front()<<" "<<*(dq2[a-1].begin()+h)<<endl;
		}
	}

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
