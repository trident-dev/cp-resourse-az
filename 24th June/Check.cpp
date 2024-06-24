#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b || c>d){
		cout<<-1<<endl;
		return;
	}
	else{
		if(c>b || a>d) cout<<-1<<endl;
		else{
			cout<<(c>=a?c:a)<<" "<<(b>=d?d:b)<<endl;
		}
	}
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	//int t; cin>> t; while(t--)
	solve();
}
