#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c;
	cin>>a;
	int arr[a];
	for( int i=0; i<a; i++){
		cin>>arr[i];
	}
	sort(arr, arr+a);
	//reverse(arr, arr+a);
	for(int i =1; i<a; i++){
		if(arr[i]!=arr[i-1]){
			cout<<arr[i]<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
