#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	stack <char> l;
	int count=0;
	string s;
	getline(cin , s);
	//cout<<"Here";
	for(int i=0; i<s.length(); i++){
		if(s[i]=='(')
			l.push('(');
		else{
			if(!l.empty())
				l.pop();
			else
				count++;
		}
			
	}
	if(!l.empty())
		count+=l.size();
	cout<<count<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; string d; getline(cin, d); 
	while(t--) solve();
}
