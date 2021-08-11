#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a, b, c,d;
	cin>>a>>b;
	int arr[a];
	for(int i =0; i<a; i++)
		cin>>arr[i];
	map <int, pair<int, int>> m;
	m[arr[0]+arr[1]]= {0, 1};
	for( int i =2; i<a; i++){
		for(int j=i+1; j<a; j++){
			c = arr[i]+arr[j];
			if(m.find(b-c)!= m.end()){
				cout<<"YES"<<endl;
				return;
			}
		}
		for(int j =0; j<i; j++){
			m[arr[i]+arr[j]]={i, j};
		}
	}
	cout <<"NO"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //int t; cin>> t; //string d; getline(cin, d); 
    //while(t--) 
    solve();
}