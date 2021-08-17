/* Gives wrong answer i.e. fails some test case however the logic is 
correct as verified by the editorial code window, check back once*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c, d;
	deque<int> dq;
	cin>>a>>b;
	int arr[a];
	//dq.push_back(INT_MIN);
	for( int i =0; i<a; i++){
		cin>>arr[i];
		while(!dq.empty() && dq.back()<arr[i])
			dq.pop_back();
		dq.push_back(arr[i]);
		if(dq.front() == arr[i-b])
			dq.pop_front();
		if(i>=b-1)
			cout<<dq.front()<<" ";
	}
	cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}