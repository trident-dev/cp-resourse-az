// check for some wrong answer somehow //

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b=1, c=0,d;
	cin>>a;
	int arr[a];
	cin>>arr[0];
	set <int> st;
	st.insert(arr[0]);
	for( int i=1; i<a; i++){
		cin>>arr[i];
		if(st.count(arr[i]))
			st.clear();
		st.insert(arr[i]);
		c = max(c, (int)st.size());
	}
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
