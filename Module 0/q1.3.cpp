#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long m, f, r;
	cin>>m>> f>> r;
	if(m == -1 || f == -1)
		cout<<"F"<<endl;
	else if(m+f>=80)
		cout<<"A"<<endl;
	else if(m+f>=65)
		cout<<"B"<<endl;
	else if(m+f>=50)
		cout<<"C"<<endl;
	else if(m+f>=30 && r>=50)
		cout<<"C"<<endl;
	else if(m+f>=30)
		cout<<"D"<<endl;
	else
		cout<<"F"<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
