//check for empty stack always

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	int a, b, c;
	cin>>a;
	string cmd;
	stack<int> s;
	for(int i =0;i<a; i++){
		cin>>cmd;
		if(cmd=="add"){
			cin>>b;
			s.push(b);
		}
		else if(cmd =="print"){
			if(!s.empty())
				cout<<s.top()<<endl;
			else
				cout<<"0"<<endl;
		}
		else if(cmd =="remove"){
			if(!s.empty())
				s.pop();
		}
	}
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
