#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n, m=0;
	cin>>n;
	if(n==1){
		cout<<"NO"<<endl;
	}

	for(long long i =1; i*i<=n; i++){
		if(n%i == 0)
			m++;
		if(m>2){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
