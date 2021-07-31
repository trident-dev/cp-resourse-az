#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

// bool map_comp(map<int, int> a, map<int, int> b){
// 	if(a.first < b.first)
// 		return true;
// 	else
// 		return false;
// }

void solve(){
	int a, b, c, d;
	cin>>a>>b;
	int arr1[a], arr2[b];
	map <int, int> un, mi; //, in, mi;
	for( int i=0; i<a; i++){
		cin>>arr1[i];
		un[arr1[i]]++;
		// in[arr1[i]]++;
		mi[arr1[i]]++;
	}
	for(int i=0; i<b; i++){
		cin>>arr2[i];
		un[arr2[i]]++;
		mi[arr2[i]]--;
	}
	// sort(un.begin(), un.end(), map_comp);
	// sort(mi.begin(), mi.end(), map_comp);

	for(auto i:un){
		cout<<i.first<<" ";
	}
	cout<<endl;
	for(auto i:un){
		if(i.second ==2)
			cout<<i.first<<" ";
	}
	cout<<endl;
	for(auto i:mi){
		if(i.second == 1)
			cout<<i.first<<" ";
	}
	cout<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
