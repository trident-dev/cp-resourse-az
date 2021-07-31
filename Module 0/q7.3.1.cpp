#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

int prior(char a){
	if(a=='+' || a=='-')
		return 1;
	else if(a=='*' || a=='/')
		return 2;
	else if(a =='^')
		return 3;
	else
		return -1;

}

void solve(){
	string s, r="";
	cin>>s;
	stack <char> st;
	for( int i =0; i< s.length(); i++){
		if(s[i]>='a' && s[i]<='z'){
			r+=s[i];
		}

		else if(s[i] == '(')
			st.push('(');

		else if(s[i] == ')'){
			while(!st.empty() && st.top()!='(')
			{
				r+= st.top();
				st.pop();
			}
			if(!s.empty() && st.top()=='(')
				st.pop();
		}
		else{
			while(!st.empty() && prior(s[i])<=prior(st.top())){
				r+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		r+=st.top();
		st.pop();
	}
	cout<<r<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
