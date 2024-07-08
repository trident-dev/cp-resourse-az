#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n, even=0, odd=0, positive=0, negative=0;
	cin>>n; long long arr[n];

	for(int i =0; i<n; i++){
		cin>>arr[i];
		if(arr[i]%2==0) even++;
		else odd++;
		if(arr[i]>0) positive++;
		else if(arr[i]<0) negative++;
	}

	cout<<"Even: "<<even<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Positive: "<<positive<<endl;
	cout<<"Negative: "<<negative<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	//int t; cin>> t; while(t--)
	solve();
}
