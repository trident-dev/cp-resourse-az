#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s, r="", sm ="";
	getline(cin, s);
	//cin>>s;
	for(int i =0; i<s.length(); i++){
		if(s[i]>='a' && s[i]<='z'){
			sm=sm+s[i];
		}
	}
	for(int i =0; i<sm.length(); i++){
		r=sm[i]+r;
	}
	//cout<<r<<endl;
	if(r==sm)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string d;
	int t; cin>> t; getline(cin, d);while(t--)
	solve();
}
