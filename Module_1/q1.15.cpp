/*Use 2 stacks
You have done some weird bullshit*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

struct min_st{
	set <int> st;
	void push(int x){
		st.insert(x);
	}
	void pop()
	{
		if(!st.empty())
			st.erase(--st.end());
	}
	int top()
	{
		if(!st.empty())
			return *st.rbegin();
		else
			return -1;
	}
	int getMin()
	{
		if(!st.empty())
			return *st.begin();
		else
			return -1;
	}
};
void solve(){
	min_st st1;
	int a, b, c, d;
	cin>>a;
	for(int i=0; i<a;i++){
		string s;
		cin>>s;
		if(s== "push"){
			int x;
			cin>>x;
			st1.push(x);
		}
		else if(s=="top"){
			int x = st1.top();
			cout<< x<< endl;
		}
		else if(s=="pop"){
			st1.pop();
		}
		else{
			int x = st1.getMin();
			cout<<x<<endl;
		}
	}

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //int t; cin>> t; //string d; getline(cin, d); 
    //while(t--) 
    solve();
}