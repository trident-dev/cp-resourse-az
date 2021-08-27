#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c, d;
	cin>>a;
	int arr1[a], arr2[a];
	for(int i=0; i<a; i++)
		cin>>arr1[i];
	for(int i=0; i<a; i++)
		cin>>arr2[i];
	pair<int, int> p[a];
	for(int i=0; i<a; i++)
		p[i] = {arr1[i]+arr2[i], i};

	sort(p, p+a);
	ll p1 =0, p2=0;
	for(int i = a-1, j=0; i>=0; i--, j^=1){
		if(!j)
			p1+=arr1[p[i].second];
		else
			p2+=arr2[p[i].second];
	}
	if(p1>p2)
		cout<<"Alice"<<endl;
	else if(p2>p1)
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