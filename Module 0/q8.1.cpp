#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b;
	string s;
	deque <int> dq;
	cin>>a;
	for(int i =0; i<a; i++){
		cin>>s;
		if(s=="insertback"){
			cin>>b;
			dq.push_back(b);
		}
		else if(s=="eraseback"){
			if(!dq.empty())
				dq.pop_back();
		}
		else if(s=="insertfront"){
			cin>>b;
			dq.push_front(b);
		}
		else if(s=="erasefront"){
			if(!dq.empty())
				dq.pop_front();
		}
		else if(s=="printback"){
			if(!dq.empty())
				cout<<dq.back()<<endl;
			else
				cout<<"0"<<endl;
		}
		else if(s== "print"){
			cin>>b;
			if(dq.size()>b)
				cout<<dq.at(b)<<endl;
			else
				cout<<"0"<<endl;
		}
		else if(s=="printfront"){
			if(!dq.empty())
				cout<<dq.front()<<endl;
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
