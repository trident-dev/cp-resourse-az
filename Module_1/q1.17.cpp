// Ask someone what is wrong with this ?? //
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a,b,c,d;
	cin>>a;
	int arr[a+2], l[a+2], r[a+2];
	arr[0]=arr[a+1]=l[0]=l[a+1]=r[0]=r[a+1]=-1;
	for(int i=1; i<=a; i++)
		cin>>arr[i];
	stack<int> st;
	st.push(0);
	for(int i=1; i<=a; i++){
		while(arr[st.top()]>= arr[i]){
			st.pop();
		}
		l[i] = st.top();
		st.push(i);
	}
	while(!st.empty()) st.pop();
	st.push(a+1);
	for(int i=a;i>=1; i--){
		while(arr[st.top()]>=arr[i])
			st.pop();
		r[i] = st.top();
		st.push(i);
	}
	ll maxi = 0;
	for(int i=1; i<=a; i++){
		ll curr = arr[i]*(r[i]-l[i]-1);
		maxi = max(maxi, curr);
	}

	cout<<maxi<<endl;
 
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}