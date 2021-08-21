#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
/*Done a blunder based on Sub-array and Sub-Set definition
Please check again*/

typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	ll a,b,c=0,d;
	cin>>a;
	ll arr[a];
	for(int i=0; i<a; i++){
		cin>>arr[i];
	}
	sort(arr, arr+a);
	for(int i=0; i<a; i++){
		c+=arr[i]*(a-i);
		//cout<<"adding "<<arr[i]<<endl;
		//d=arr[i]*((a-1-i)*(a-i)/2);
		//cout<<"adding "<<d<<endl;
		//c+=d;
	}
	cout<<c<<endl;
	//cout<<"Final output "<<c<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}