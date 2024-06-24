#include <bits/stdc++.h>
using namespace std;

void solve(){
	double x, y;
	cin>>x>>y;
	int a;

	if(x == 0 || y == 0){
		// if( x == 0 && y == 0)
		cout<<(x==y? "Origem": (x==0? "Eixo Y": "Eixo X"))<<endl;
		// cout<<"Eixo "<<(x ==0?"Y":"X")
	}
	else {
		cout<<"Q"<<(x>0?(y>0?1:4):(y>0?2:3))<<endl;
	}
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
