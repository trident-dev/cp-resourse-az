#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, b, i;
	cin>>a>>b;
	if(a==1){
		for(i=0; i*i<=b; i++)
			continue;
		i--;
		if(i*i ==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else{
		for(i =0; i*i*i<=b; i++)
			continue;
		i--;
		if(i*i*i == b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
