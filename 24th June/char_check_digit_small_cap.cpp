#include <bits/stdc++.h>
using namespace std;

void solve(){

	char c;
	cin>>c;
	int a = (int)c;
	if(a>=48 && a<=(48+9)) cout<<"IS DIGIT"<<endl;
	else if(a>=65) {
		cout<<"ALPHA"<<endl;
		if(a>=97) cout<<"IS SMALL"<<endl;
		else cout<<"IS CAPITAL"<<endl;

	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// int t; cin>> t; while(t--)
	solve();
}
