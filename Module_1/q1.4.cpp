#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

int pos(ll arr[], int a, int b){
	auto it = upper_bound(arr, arr+a, b);
	if(it == arr)
		return 0;
	else if(it == arr+a)
		return a;
	else
		return (int)(it - arr);

}


void solve(){
	int a, b, c, d;
	cin>>a>>b;
	ll arr[a], sum=0;
	for(int i =0; i<a; i++){
		cin>>arr[i];
		sum+=arr[i];
		arr[i] = sum;
	}
	for(int i=0; i<b; i++){
		cin>>c;
		d = pos(arr, a, c);
		cout<<d<<endl;
	}
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // int t; cin>> t; //string d; getline(cin, d); 
    // while(t--) 
    solve();
}