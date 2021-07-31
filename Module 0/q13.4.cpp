#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a,b,c=0,d;
	string s;
	cin>>s;
	pair<ll, ll> cordi = {0,0};
	pair<ll, ll> cordie = {0,0};
	map< pair<int, int>, set <char> > mp;

	for( int i=0; i<s.length(); i++){
		if(i==0)
			mp[cordi].insert(s[i]);
		if(s[i]=='E'){
			cordi.first++;
			if(mp.count(cordi)){
				if(mp[cordi].count('W'))
					c+=1;
				else{
					mp[cordi].insert('E');	
					c+=5;		
				}
			}
			else{
				mp[cordi].insert('W');
				c+=5;
			}
		}
		else if(s[i]=='W'){
			cordi.first--;
			if(mp.count(cordi)){
				if(mp[cordi].count('E'))
					c+=1;
				else{
					mp[cordi].insert('W');
					c+=5;		
				}
			}
			else{
				mp[cordi].insert('W');
				c+=5;
			}
		}
		else if(s[i]=='N'){
			cordi.second++;
			if(mp.count(cordi)){
				if(mp[cordi].count('S'))
					c+=1;
				else{
					mp[cordi].insert('N');
					c+=5;		
				}
			}
			else{
				mp[cordi].insert('N');
				c+=5;
			}
		}
		else if(s[i]=='S'){
			cordi.second--;
			if(mp.count(cordi)){
				if(mp[cordi].count('N'))
					c+=1;
				else{
					mp[cordi].insert('S');
					c+=5;		
				}
			}
			else{
				mp[cordi].insert('S');
				c+=5;
			}
		}
	}
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
