#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	int a, b, c, d;
	vector<int>v;
	string s;
	cin>>a;
	for(int i= 0; i<a ; i++){
		cin>>s;
		if(s=="add"){
			cin>>b;
			v.push_back(b);
		}
		else if(s =="print"){
			cin>>b;
			if(b>=v.size())
				cout<<0<<endl;
			else
				cout<<v[b]<<endl;
		}
		else if(s=="remove"){
			v.pop_back();
		}
		else if(s=="clear"){
			v.clear();
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
