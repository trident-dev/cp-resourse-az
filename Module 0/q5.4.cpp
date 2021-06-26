#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	long long n, i, diff, count=1;
	cin>>n;
	long long a[n], b[n+1];
	for(i =0; i<n ; i++) 
		cin>>a[i];

	diff = a[1]-a[0];
	memset(b, 0, sizeof(b));
	for( i=1; i<n ; i++){
		if(a[i]-a[i-1] == diff)
			count++;
		else{
			b[i] = count;
			count = 2;
			diff = a[i]-a[i-1];
		}
	}
	b[n] = count;
	sort(b, b+n+1);
	cout<<b[n]<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
