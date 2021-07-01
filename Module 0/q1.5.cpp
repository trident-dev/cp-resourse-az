#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s, x, y, z;
	//getline(cin, s);
	getline(cin, s);
	int sp, dot;
	for(int i =0; i< s.length(); i++){
		if(s[i]==' '){
			x = s.substr(0, i);
			//cout<<"x is: "<<x<<endl;
			sp = i;
		}
		else if(s[i] =='.'){
			y = s.substr(sp+1, i-sp-1);
			//cout<<"y is: "<<y<<endl;
			dot =i;
			z = s.substr(dot+1, s.length()-dot-1);
			//cout<<"z is: "<<z<<endl;
		}
	}
	int X, Y, Z;
	X = stoi(x);
	Y = stoi(y);
	Z = stoi(z);

	cout<<Z+X<<"."<<Y+X<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string d;
	int t; cin>> t; getline(cin, d);while(t--)
	solve();
}
