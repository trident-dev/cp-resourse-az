//----Check Once :: Shows Runtime Errors---//

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c,d=0;
	priority_queue <int> pq;
	cin>>a>>b;
	for(int i=0; i<a; i++){
		cin>>c;
		pq.push(c);
	}
	for(int i =0; i<b; i++){
		int e = pq.top();
		d+= e;
		pq.pop();
		pq.push(e/2);
	}
	cout<<d<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
