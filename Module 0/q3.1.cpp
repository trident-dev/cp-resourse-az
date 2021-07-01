#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	int a, x, y,n;
	cin>>s;
	cin>>a;
	string cmd, p;
	for(int i =0; i<a; i++){
		cin>>cmd;
		if(cmd=="print"){
			cin>>x>>y;
			cout<<s.substr(x, (y-x)+1)<<endl;
		}
		else if(cmd=="reverse"){
			cin>>x>>y;
			reverse(s.begin()+x, s.begin()+y+1);
		}
		else if(cmd=="replace"){
			cin>>x>>y>>p;
			string sn="";
			for(int i =0; i<x;i++)
				sn=sn+s[i];
			for(int i=0; i<=(y-x); i++)
				sn=sn+p[i];
			for(int i =y+1; i<s.length(); i++)
				sn=sn+s[i];
			s = sn;
		}
		else if(cmd== "rotate"){
			cin>>x;
			n=s.length();
			s=s.substr(n-x, x)+s.substr(0, n-x);
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string d;
	int t; cin>> t;//getline(cin, d) 
	while(t--)
	solve();
}
