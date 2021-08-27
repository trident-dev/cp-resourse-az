#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	string s;
	cin>>s;
	if(s.length() == 1){
		if(s=='X' || s=='x')
			cout<<1<<endl;
		else
			cout<<0<<endl;
		return;
	}
	stack <char> st;
	st.push(s[0]);
	string ex1="", ex2="";
	for(int i=1; i<s.length(); i++){
		if(s[i]=='(')
			st.push('(');
		else if(s[i] == ')'){
			if(!st.empty())
				st.pop()
			if(st.size()==1)
				
		}
	}
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}