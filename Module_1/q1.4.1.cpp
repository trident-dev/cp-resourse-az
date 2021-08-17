/*Use long long whenever summing
BInary search goes upto n-1 :: IMPORTANT*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

int bin_search(ll arr[], int a, int q)
{
	int ans =-1, l= 0, r=a-1, mid;
	while(l<=r){
		mid = (l+r)/2;
		if(arr[mid]<= q){  // use logic to verify :: Done while coding
			ans = mid;
			l = mid+1;
		}
		else
			r = mid-1;
	}
	return (ans+1);
}

void solve(){
	int a, b, c, d, e;
	cin>>a>>b;
	ll arr[a];
	for( int i =0; i<a; i++)
		cin>>arr[i];
	sort(arr, arr+a);
	for(int i=1; i<a; i++)
		arr[i]+=arr[i-1];
	for( int i=0; i<b; i++){
		cin>>c;
		cout<<bin_search(arr, a, c)<<endl;
	}
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // int t; cin>> t; //string d; getline(cin, d); 
    // while(t--) 
    solve();
}