#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b, c, d;
	cin>>a;
	ll arr[a];
	stack <int> st;
	for(int i=0; i<a; i++){
		cin>>arr[i];
		while(!st.empty() && arr[st.top()]>=arr[i]){
			st.pop();
		}
		if(st.empty())
			cout<<"0 ";
		else
			cout<<st.top()+1<<" ";
		
		st.push(i);
	}
	cout<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
