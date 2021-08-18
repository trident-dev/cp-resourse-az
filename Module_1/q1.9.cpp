#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a,b,c=0,d=0;
	cin>>a>>b;
	int arr[a];
	map<int> mp; 
	vector<int> vec;
	for(int i =0; i<a; i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	for(auto it:mp){
		c++;
		if(it->second>1)
			vec.push_back((it->second)-1);
	}
	for(int i=vec.size()-1; i>0; i--){
		if(vec[i]<b){
			b-=vec[i];
		}
		else if(b<=vec[i]){
			vec[i]-=b;
			b=0;
		}
	}
	d=a*(a-1)/2;
	for(auto it:vec){
		if(it>0)
			d-=(it*(it-1)/2);
	}

	cout<<d<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}