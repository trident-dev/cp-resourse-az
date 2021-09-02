#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c;
	cin>>a>>b>>c;
	int d = __gcd(a, b);
	if(c%d == 0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}