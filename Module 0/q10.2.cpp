#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c;
	priority_queue <int> pq;
	cin>>a;
	string s;
	for(int i =0; i<a; i++){
		cin>>s;
		if(s=="add"){
			cin>>b;
			pq.push(b);
		}
		else if(s=="remove"){
			if(!pq.empty())
				pq.pop();
		}
		else{
			if(!pq.empty())
				cout<<pq.top()<<endl;
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
