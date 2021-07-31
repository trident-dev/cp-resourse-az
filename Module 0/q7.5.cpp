#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c, d;
	stack <int> st1, st2;
	cin>>a;
	for(int i=0; i<a; i++){
		string s;
		cin>>s;
		if(s=="push"){
			cin>>b;
			if(st1.empty())
				c=b;
			st1.push(b);
		}
		else if(s=="pop"){
			if(st1.empty() && st2.empty())
				cout<<endl;
			else if(!st2.empty()){
				cout<<st2.top()<<endl;
				st2.pop();
			}
			else{
				while(!st1.empty()){
					st2.push(st1.top());
					st1.pop();
				}
				cout<<st2.top()<<endl;
				st2.pop();
			}
		}
		else if(s=="front"){
			if(st1.empty() && st2.empty())
				cout<<endl;
			else if(!st2.empty())
				cout<<st2.top()<<endl;
			else{
				cout<<c<<endl;
			}
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
