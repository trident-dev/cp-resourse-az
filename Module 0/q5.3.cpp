#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	long long i, n, b;
	cin>>n>>b;
	long long a[n];
	for(i =0; i<n ; i++) cin>>a[i];

	sort(a, a+n);

	for(i =0; i<n; i++){
		if(b>=a[i])
			b-=a[i];
		else
			break;
	}
	cout<<i<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--)
		solve();
}
