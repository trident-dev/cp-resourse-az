#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b;
	string s;
	set <int> st;
	cin>>a;
	for(int i=0; i<a; i++){
		cin>>s;
		if(s=="add"){
			cin>>b;
			st.insert(b);
		}
		else if(s=="find"){
			cin>>b;
			if(st.find(b)!=st.end())
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if(s=="erase"){
			cin>>b;
			st.erase(b);
		}
		else if(s=="empty"){
			st.clear();
		}
		else if(s=="print"){
			for(auto it : st)
				cout<<it<<" ";
			cout<<endl;
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
