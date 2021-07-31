#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b=0, c=0, d;
	cin>>a;
	int arr[a];
	for( int i =0; i<a; i++)
		cin>>arr[i];

	map<int, int> m;
	for( int i =0; i<a; i++)
	{
		while(m[arr[i]]==1){
			m[arr[b]]--;
			b++;
		}
		m[arr[i]]++;
		c = max(c, i-b+1);
	}
	cout<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
