#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	long long x1,y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;

	long long l, b, ai, au;
	
	x5 = max(x1, x3);
	x6 = min(x2, x4);
	y5 = max(y1, y3);
	y6 = min(y2, y4);

	l = x6 -x5;
	b = y6 -y5;

	if(l<0 || b<0) l=0;

	ai = l*b;

	au = (x2-x1)*(y2-y1)+(x4-x3)*(y4-y3) - (ai);
	cout<<ai<<" "<<au<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
