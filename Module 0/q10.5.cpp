#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve(){
	int a,b,c,d;
	cin>>a;
	string s;
	ordered_set st;
	for(int i=0; i<a; i++){
		cin>>s>>b;
		if(s=="add"){m
			st.insert(b);
		}
		else if(s=="remove"){
			if(st.find(b)!=st.end())
				st.erase(st.find(b));
		}
		else if(s=="find"){
			if(b>=(int)st.size())
				cout<<"-1"<<endl;
			else
				cout<<*(st.find_by_order(b))<<endl;
		}
		else{
			cout<< st.order_of_key(b)<<endl;
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
