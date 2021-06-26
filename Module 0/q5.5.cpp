#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	long long a[6], temp;
	string s;
	for( int i =0; i<6 ; i++)
		cin>>a[i];
	cin>>s;
	for( int i =0; i<s.length(); i++){
		if(s[i]=='N'){
			temp = a[0];
			a[0] = a[1];
			a[1] = a[5];
			a[5] = a[4];
			a[4] = temp;
		}
		else if(s[i] == 'S'){
			temp = a[1];
			a[1] = a[0];
			a[0] = a[4];
			a[4] = a[5];
			a[5] = temp;
		}
		else if(s[i] == 'E'){
			temp = a[0];
			a[0] = a[3];
			a[3] = a[5];
			a[5] = a[2];
			a[2] = temp;
		}
		else if(s[i] == 'W'){
			temp = a[0];
			a[0] = a[2];
			a[2] = a[5];
			a[5] = a[3];
			a[3] = temp;
		}
	}
	cout<<a[0]<<endl;	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
