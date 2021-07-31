#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	multiset <int> ms;
	int a, b, c;
	string s;
	cin>>a;
	for(int i =0; i<a; i++){
		cin>>s;
		if(s=="add"){
			cin>>b;
			ms.insert(b);
		}
		else if(s=="erase"){
			cin>>b;
			ms.erase(ms.find(b));
		}
		else if(s=="eraseall"){
			cin>>b;
			if(ms.find(b)!=ms.end())
				ms.erase(b);
		}
		else if(s=="find"){
			cin>>b;
			if(ms.find(b)!=ms.end())
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if(s=="count"){
			cin>>b;
			cout<<ms.count(b)<<endl;
		}
		else if(s=="print"){
			for( int i:ms)
				cout<<i<<" ";
			cout<<endl;
		}
		else if(s=="empty"){
			ms.clear();
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
