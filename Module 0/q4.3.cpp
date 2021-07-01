#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, b=1, i;
	cin>>a;
	if(a ==1){
		cout<<1<<endl;
		return;
	}
	for (i=2; i*i<=a; i++){
		if(a%i==0)
			b++;
	}
	b*=2;
	i--;
	if(i*i == a)
		b--;
	cout<<b<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
