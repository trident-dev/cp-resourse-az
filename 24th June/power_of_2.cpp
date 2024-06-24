#include <bits/stdc++.h>
using namespace std;

void solve(){

	long long a;
	cin>>a;
	while(a%2 == 0 || a == 1)
	{
		//cout<<"A = "<<a<<endl; 
		if (a==1 || a==0) {
			cout<<"YES"<<endl;
			return;}

		else a/=2;
	}
	cout<<"NO"<<endl;
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

//	int t; cin>> t; while(t--)
	solve();
}
