#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c,d;
	cin>>a;
	int arr[a];
	for(int i =0; i<a; i++)
		arr[i]=i+1;
	do{
		for(int i =0; i<a; i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}while(next_permutation(arr, arr+a));
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	//int t; cin>> t; //string d; getline(cin, d); 
	//while(t--) 
	solve();
}
