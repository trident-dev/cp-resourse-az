#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a;
	cin>>a;
	string s;
	map<string, int> reg;
	for(int i =0; i<a; i++){
		cin>>s;
		if(!reg.count(s)){
			cout<<"OK"<<endl;
			reg[s]=1;
		}
		else{
			cout<<s<<reg[s]<<endl;
			reg[s]++;
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
