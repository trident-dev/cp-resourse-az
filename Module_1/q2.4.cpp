#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007


void solve(){
	ll a,b,c, d;
	cin>>a;
	b = a-3;
	if(a%2 == 0)
		a/=2;
	else
		b/=2;

	c= a*b%mod;
	//b -= a;
	cout<<c<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}