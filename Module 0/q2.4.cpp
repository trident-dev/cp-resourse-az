#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, b, c;
	cin>>a>>b>>c;
	for(int i =0; i<=(b)*a; i++){
		for(int j =0; j<(c+1)*b; j++){
			if(i%(b)==0)
				cout<<"*";
			else if(j%(c+1) ==0)
				cout<<"*";
			else if((i+j)%((c+1)*2)==0)
				cout<<"/";
			else if((i-j)%((c+1)*2)==0)
				cout<<"\\";
			// else if(j%(2*(c+1))==i%(2*(c+1)))
			// 	cout<<"\\";
			// else if(j%(2*(c+1)) == 2*(c+1)-i%(2*(c+1)))
			// 	cout<<"/";
			else
				cout<<".";
		}
		cout<<"*"<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
