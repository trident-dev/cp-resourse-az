#include <bits/stdc++.h>
using namespace std;

void solve(){
	string n, o="";
	long long a, b, sum=0, prod_a=1, prod_b=1;
	cin>>n;
	//cout<<n<<endl;
	cin>>a>>b;
	//cout<<a<<" "<<b<<endl;
	for(int i=0; i<n.length(); i++){
		string c = n.substr(n.length()-1-i, 1);
		int l;
		if(c[0]>='0' && c[0]<='9')
			l = stoi(c);
		else
			l = c[0]-55;
		sum+=l*prod_a;
		prod_a*=a;
	}
	//cout<<sum<<endl;
	while(sum>0){
		string si;
		if (sum%b <=9)
			si = to_string(sum%b);
		else
			si = char(65+(sum%b)-10);
		o = si + o;
		sum/=b;
	}
	cout<<o<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
