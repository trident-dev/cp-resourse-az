#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	string s;
	int ptr =0;
	queue<char> q;
	deque<char> dq, st;
	//stack<char> st;
	cin>>s;
	string ss = s;
	sort(ss.begin(), ss.end());
	
	for(int i=0; i<s.length(); i++){
		q.push(s[i]);
	}

	while(!q.empty()){
		char c = q.front();
		q.pop();
		dq.push_back(c);
		if(ss[ptr] == dq.back()){
			st.push_back(dq.back());
			//cout<<dq.back();
			dq.pop_back();
			ptr++;
		}
	}
	while(!dq.empty()){
		st.push_back(dq.back());
		//cout<<dq.back();
		dq.pop_back();
	}
	string res = "";
	int sz = st.size();
	for(int i =0; i<sz; i++){
		res+= st.front();
		st.pop_front();
	}
	cout<<res<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}