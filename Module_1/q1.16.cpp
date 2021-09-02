/*MOLECULAR FORMULA
Extremly irritating and implementation based question
Do Later*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b=0, c=0, d;
	string s;
	cin>>s;
	map<string, int> mp;
	stack <string> st;
	string curr="", last="";
	for(int i=1; i<s.length(); i++){
		if(s[i]>='A' && s[i]<= 'Z'){
			last = curr;
			curr = s.substr(b, i-b);
			if(s[b]>='A' && s[b]<= 'Z')
			{	
				st.push(curr);
				mp[curr]++;
			}
			else if(s[b]>='0'&& s[b]<='9')
			{
				int l = stoi(last);

			}
			b=i;
		}
		else if(s[i] == 'i'){}
		else if(s[i] == '('){}
		else if(s[i] == ')'){}
		else if(s[i] == '5'){}
	}
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}