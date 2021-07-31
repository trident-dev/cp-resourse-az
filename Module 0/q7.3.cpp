// to be done //

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

int priority(char a){
	if(a =='+', a=='-')
		return 1;
	else if(a=='*', a=='/')
		return 2;
	else if(a=='^')
		return 3;
}

void solve(){
	string s, res="";
	stack <char> st;
	cin>>s;
	for(int i =0; i<s.length(); i++){
		if(s[i]>='a' && s[i]<='z'){
			res+=s[i];
		}
		else if(s[i]=='('){
			st.push('(');
		}
		else if(s[i]==')'){
			while(!st.top()=='(' && !st.empty()){
				res+=st.top();
				st.pop();
			}
			if(!st.empty() && st.top()=='(')
				st.pop();
		}
		else{
			while(!st.empty() && priority(s[i])<=priority(st.top())){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		while(!st.empty()){
			res += st.top();
			st.pop();
		}
	}

	cout<<res<<endl;
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
