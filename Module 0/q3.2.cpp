#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	getline(cin, s);
	for(int i=0; i< s.length(); i++){
		if(s[i]>='A' && s[i]<='Z')
			s[i]+=32;
		else if(s[i]>='a' && s[i]<='z')
			s[i]-=32;
	}
	cout<<s<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string d;
	int t; cin>> t;getline(cin, d); while(t--)
	solve();
}
