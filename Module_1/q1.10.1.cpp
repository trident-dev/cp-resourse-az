/*Idea very similar to monotone deque
Consider revising once | Really awesome*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	 ll a, b, c, d;
	 cin>>a;
	 int arr[a+2], left[a+2], right[a+2];

	 for(int i=1; i<=a; i++)
	 	cin>>arr[i];

	 arr[0]= -1*1e9; //INT_MIN;
	 arr[a+1] =  -1*1e9; //INT_MIN;

	 stack<int> st;
	 st.push(0);
	 for(int i=1; i<=a; i++){
	 	while(!st.empty() && arr[st.top()]>=arr[i])
	 		st.pop();
	 	assert(!st.empty());
	 	left[i]=st.top();
	 	st.push(i);
	 }
	 while(!st.empty()) st.pop();
	 st.push(a+1);
	 for(int i=a; i>0; i--){
	 	while(!st.empty() && arr[st.top()]>=arr[i])
	 		st.pop();
	 	assert(!st.empty());
	 	right[i]= st.top();
	 	st.push(i);
	 }
	 ll sum =0LL;
	 for(int i=1; i<=a; i++){
	 	sum+= 1LL * arr[i]*(i -left[i])*(right[i] - i);
	 }
	 cout<<sum<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}