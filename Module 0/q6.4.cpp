#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	int a, b, c, d;
	cin>>a>>b;
	int arr[a];
	for(int i =0; i<a; i++)
		cin>>arr[i];
	sort(arr, arr+a);
	for(int i =0; i<b; i++){
		cin>>c>>d;
		if(c==1){
			auto e = lower_bound(arr, arr+a, d);
			if (e == arr || e == arr+a)
				cout<<-1<<" ";
			else
				cout<<*e<<" " ;
		}
		else if(c==2){
			auto e = upper_bound(arr, arr+a, d);
			if (e == arr || e == arr+a)
				cout<<-1<<" ";
			else
				cout<<*e<<" ";
		}
		else if(c==3){
			auto e = distance(arr,lower_bound(arr, arr+a, d)) + distance(lower_bound(arr, arr+a, d), upper_bound(arr, arr+a, d));
			cout<<e<<" ";
		}
		else if(c==4){
			auto e = distance(arr,upper_bound(arr, arr+a, d)) - distance(lower_bound(arr, arr+a, d), upper_bound(arr, arr+a, d));
			cout<<e<<" ";
		}
	}
	cout<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
