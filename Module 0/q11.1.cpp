#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b=1, c=0, d;
	cin>>a;
	int arr[a];
	map <int, int> m;
	for( int i =0; i<a; i++){
		cin>>arr[i];
		m[arr[i]]++;
	}
	
	for(int i=0; i<32; i++){
		for(int j =0; j<a; j++){
			m[arr[j]]--;
			if(m.count(b- arr[j]))
				c+= m[b-arr[j]];
		}
		for( int j=0; j<a; j++){
			m[arr[j]]++;
		}
		b*=2;
	}

	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
