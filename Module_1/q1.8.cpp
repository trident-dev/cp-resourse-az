/*Solve with brute force
------To be done later--------*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c=0;
	long long d;
	multiset<int> s1, s2;
	cin>>a;
	d = pow(2.0, a);
	//cout<<"2^d is : "<<d<<endl;
	vector<int> vec;
	cin>>b;
	//s2.insert(0);
	for(int i=0; i<(int)d-1; i++){
		cin>>b;
		//cout<<"inside "<<i+1<<"th iteration"<<endl;
		vec.push_back(b);
		if(s2.find(b)==s2.end() && c==0 ){
			s1.insert(b);
			//cout<<b<<" ";
			if(s1.size()>=a)
				c=1;
			vector <int> v;
			for(auto it: s2){
				v.push_back(it+b);
				cout<<(it+b)<<" ";
			}
			for(auto it:v)
				s2.insert(it);
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