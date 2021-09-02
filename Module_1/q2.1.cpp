/* Ask someone --- Very very important ------*/
/* Weird question || Definelty not one star  */

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b, c;
	cin>>a>>b>>c;
	ll d = c%b;
	ll e = a%b;
	if(e == 0){
		if(d==0)
			cout <<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	else if((d%e)%b == 0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}