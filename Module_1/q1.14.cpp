#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a,b, c, d;
	cin>>a;
	int arr1[a], arr2[a];
	multimap <int, int> mp;
	for(int i=0; i<a; i++)
		cin>>arr1[i];
	for(int i=0; i<a; i++){
		cin>>arr2[i];
		mp.insert({arr1[i], (-1*arr2[i])});
		mp.insert({arr2[i], arr1[i]});
	}
	ll alice =0LL;
	ll bob = 0LL;
	auto it = mp.rbegin();
	while(1){
		if(it->second>=0){
			alice+=it->second;
			bob+=it->first;
			cout<<"Alice Played: "<<it->second<<endl;
			cout<<"Bob Played:   "<<it->first <<endl;
		}
		else{
			alice+=it->first;
			bob+=(-1*(it->second));
			cout<<"Alice Played: "<<it->first <<endl;
			cout<<"Bob Played:   "<<it->second<<endl;
		}
		it++;
		if(it == mp.rend())
			break;
	}
	if(alice>bob)
		cout<<"Alice"<<endl;
	else if(bob>alice)
		cout<<"Bob"<<endl;
	else
		cout<<"Tie"<<endl;
	return;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}