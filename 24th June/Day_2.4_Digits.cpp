#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, b, c=0, arr[12];
	cin>>a;
	b=a;
	if(b==0){
		cout<<"0 "<<endl;
		return;
	} // first wrong answer of the edge case of 0
	while(b>0){
		arr[c]= b%10;
		cout<<b%10<<" ";
		b/=10;
		c++;
	}
	cout<<endl;
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
