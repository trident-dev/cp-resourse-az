#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b;
	cin>>a>>b;
	int ar[a];
	deque <int> dq;
	for(int i=0; i<a; i++){
		cin>>ar[i];
	}

	for(int i =0; i< b-1; i++)
	{
		while(!dq.empty() && dq.back()<ar[i]){
			dq.pop_back();
		}

		dq.push_back(ar[i]);
	}
	//cout<<"First Front "<<dq.front()<<endl;
	//cout<<"First Back "<<dq.back()<<endl;
	for(int i = b-1; i<a; i++){
		while(!dq.empty() && dq.back()<ar[i])
			dq.pop_back();
		dq.push_back(ar[i]);
		cout<<dq.front()<<" ";
		if(dq.front()==ar[i-b+1])
			dq.pop_front();
		
	}
	cout<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; //string d; getline(cin, d); 
	while(t--) solve();
}
