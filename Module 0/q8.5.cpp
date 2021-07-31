#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	long long a, b, c, d;
	set <long long> s1, s2;
	cin>>a;
	for( ll i=0; i< a; i++){
		cin>>b>>c;
		if(b==1)
			s1.insert(c);
		else if(b==2){
			s2 = s1;
			while(true){
				s2.insert(c);
				if(s2.size()!= s1.size())
					break;
				else
					c++;
			}
			cout<<c<<endl;
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
