/*Some bullshit related to verification of Sums apart from the primay logic
Have a look at that too*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	 int a,b,c,d;
	 cin>>a;
	 cin>>b;
	 for(int i=0;i<a-1; i++){
	 	cin>>c;
	 	d = __gcd(b,c);
	 	b=d;
	 }
	 cout<<"Yes"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}