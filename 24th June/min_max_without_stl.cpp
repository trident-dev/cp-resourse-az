#include <bits/stdc++.h>
using namespace std;

void solve(){

	long long a[3], min = INT_MAX, max = INT_MIN;
	// cout<<"Min = "<<min<<endl;
	// cout<<"Max = "<<max<<endl;

	cin>>a[0]>>a[1]>>a[2];

	for(int i =0; i<3;i++){
		//cout<<"Inside "<<i<<"th iteration | Min = "<<min<<" | Max = "<<max<<endl;
		if (a[i]<=min) min = a[i];
		
		if(a[i]>max) max = a[i];
	}

	cout<<min<<" "<<max<<endl;
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

//	int t; cin>> t; while(t--)
	solve();
}
