#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a;
	cin>>a;
	cout<<(a/365)<<" years"<<endl;
	a%=365;
	cout<<(a/30)<<" months"<<endl;
	a%=30;
	cout<< a<<" days"<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
