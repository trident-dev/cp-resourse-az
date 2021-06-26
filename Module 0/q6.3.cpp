#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool check(pair<string, int>a, pair<string, int>b){
	if (a.second<b.second)
		return 1;
	else
		return 0;
}

void solve(){

	int a, b;
	cin>>a;
	vector<pair<string, int>> v;
	for(int i =0; i<a; i++){
		pair<string, int> p;
		cin>>p.first;
		cin>>p.second;
		v.push_back(p);
	}
	sort(v.begin(),v.end(), check);
	for( int i =0; i<a; i++){
		cout<< v[i].first << " "<<v[i].second<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
