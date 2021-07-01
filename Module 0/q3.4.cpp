#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	getline(cin, s);
	int arr[26], l;
	memset(arr, 0, sizeof(arr));
	// for(int i=0; i<26; i++)
	// 	cout<<arr[i]<<" ";
	//cout<<endl;
	for(int i=0; i<s.length(); i++){
		if(s[i]>='A' && s[i]<='Z'){
			l = s[i]-65;
			arr[l]++;
		}
		else if(s[i]>='a' && s[i]<='z'){
			l = s[i]-97;
			arr[l]++;
		}
	}
	for(int i=0; i<26; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string d;
	int t; cin>> t; getline(cin, d); while(t--)
	solve();
}
