#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a,b,c=0,d;
	int x=0, y=0;
	pair<int, int> ini = {x,y};
	pair<int, int> fin;
	pair<pair<int, int>, pair<int, int>> seg1;
	pair<pair<int, int>, pair<int, int>> seg2;
	set< pair<pair<int, int>, pair<int, int>> > st;

	string s;
	cin>>s;
	for( int i =0; i<s.length(); i++){
		x = ini.first;
		y = ini.second;
		if(s[i]=='N')
			fin={x, y+1};
		else if(s[i]=='S')
			fin={x, y-1};
		else if(s[i]=='E')
			fin={x+1, y};
		else if(s[i]=='W')
			fin={x-1, y};
		seg1={ini, fin};
		seg2={fin, ini};
		if(st.count(seg1) || st.count(seg2))
			c+=1;
		else
			c+=5;
		st.insert(seg1);
		st.insert(seg2);
		ini = fin;
	}
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
