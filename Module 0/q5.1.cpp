#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve(){
	double a,b, c, d, e, f;
	cin>>a>>b>>c>>d;
	e = abs(a-c)+abs(b-d);
	f = sqrt((a-c)*(a-c)+(b-d)*(b-d));
	cout<< fixed << setprecision(7);
	cout<<f<<" "<<e<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
