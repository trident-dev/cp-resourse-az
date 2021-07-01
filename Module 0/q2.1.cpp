#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, ans1=0, ans2=0;
	cin>>a;
	long long arr1[a], arr2[a-1], arr3[a-2];
	for(int i =0; i< a; i++){
		cin>>arr1[i];
		ans1^=arr1[i];
	}
	for(int i =0; i<a-1; i++){
		cin>>arr2[i];
		ans1^=arr2[i];
		ans2^=arr2[i];
	}
	for(int i =0; i<a-2; i++){
		cin>>arr3[i];
		ans2^=arr3[i];
	}
	cout<<ans1<<" "<<ans2<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
