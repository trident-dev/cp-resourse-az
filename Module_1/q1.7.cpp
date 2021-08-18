#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a,b=0,c,d;
	cin>>a;
	multiset<int> st;
	int arr[a];

	for(int i=0; i<a; i++){
		b++;
		cin>>arr[i];
		st.insert(arr[i]);

		if(*(st.begin()) >= b)
			cout<<b<<" ";
		else{
			//cout<<"inside here"<<endl;
			//cout<<"size is: "<<(int)st.size()<<endl;
			while(*(st.begin()) < b & (int)st.size()>1)
			{
				st.erase(st.begin());
				b--;
				//cout<<"B decreased"<<endl;
			}
			cout<<b<<" ";
		}
	}
	cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}