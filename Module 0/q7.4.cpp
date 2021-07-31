#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	string s;
	int a, b;
	queue<int> q;
	cin>>a;
	for(int i =0; i<a; i++){
		cin>>s;
		if(s=="add"){
			cin>>b;
			q.push(b);
		}
		else if(s=="print"){
			if(!q.empty())
				cout<<q.front()<<endl;
			else
				cout<<"0"<<endl;
		}
		else if(s=="remove"){
			if(!q.empty())
				q.pop();
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
