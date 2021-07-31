#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b, c, d;
	cin>>a>>b>>c;
	ll ar1=a*b, ar2=0;
	string s;
	for(int i=0; i<c; i++){
		cin>>s>>d;
		if(s=="H")
			ar2=d*b;
		else if(s=="V")
			ar2=a*d;
		ar1 = ar1-ar2;
		if(ar2>ar1)
		{
			if(s=="H")
				a=d;
			else
				b=d;
		}
		else{
			if(s=="H")
				a=(a-d);
			else
				b=(b-d);
		}
		ar1 = max(ar1, ar2);
		ar2=0;
		cout<<ar1<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
