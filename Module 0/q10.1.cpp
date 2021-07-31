#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c;
	string s, st;
	cin>>a;
	multimap <string, int> mm;
	for(int i =0; i<a; i++){
		cin>>s;
		if(s=="add"){
			cin>>st>>b;
			mm.insert({st, b});
		}
		else if(s=="erase"){
			cin>>st;
			if(mm.count(st))
				mm.erase(mm.find(st));
		}
		else if(s=="eraseall"){
			cin>>st;
			if(mm.count(st))
				mm.erase(st);
		}
		else if(s=="print"){
			cin>>st;
			auto it = mm.find(st);
			if(it!=mm.end()){
				cout<<it->second<<endl;
			}
			else
				cout<<"0"<<endl;
		}
	}

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
