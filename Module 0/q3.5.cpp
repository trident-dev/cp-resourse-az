#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a, sum=0;
	cin>>a;
	long long arr[a];
	cin>>arr[0];
	for(int i = 0; i<a-1; i++){
		cin>>arr[i+1];
		if(arr[i+1]<arr[i]){
			sum+=(arr[i]-arr[i+1]);
			arr[i+1] = arr[i];
		}
	}	
	cout<<sum<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>> t; while(t--)
	solve();
}
