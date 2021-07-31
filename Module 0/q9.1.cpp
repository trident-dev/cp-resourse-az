#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c;
	cin>>a;
	string s, n;
	map<string, int> m;
	for(int i=0; i<a; i++)
	{
		cin>>s;
		if(s=="add"){
			cin>>n>>b;
			m[n]=b;
		}
		else if(s=="print"){
			cin>>n;
			if(m.count(n))
				cout<<m[n]<<endl;
			else
				cout<<"0"<<endl;
		}
		else if(s=="erase"){
			cin>>n;
			if(m.find(n)!=m.end())
				m.erase(n);
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
