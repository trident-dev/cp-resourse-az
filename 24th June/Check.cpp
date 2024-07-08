#include <bits/stdc++.h>
using namespace std;

void solve(){

	long long a, b, arr[300], a_dg=0, b_dg=0, base = 0, ctr=0;
	cin>>a>>b;
	long long c = a, d= b;
	for(a_dg=0;c>0;c/=10) a_dg++;
	for(b_dg=0;d>0;d/=10) b_dg++;

//-----Solved in o(n)--------- //
	// for(long long i = a; i<=b; i++)
	// {
	// 	long long j = i;
	// 	while(j>0)
	// 	{
	// 		if(j%10==4 || j%10 ==7) j/=10;
	// 		else break;
	// 	}
	// 	if(j==0) cout<<i<<" ";
	// }

	// cout<<endl;

	//starting from base of each digit and 
	for(long long i =a_dg;i<=b_dg;i++){
		base=0;
		for(int j =0; j<=i; j++) base=base*10+4;
		if(base>a && base<b){
			arr[ctr]=base;
			ctr++;
		}


	}

	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// int t; cin>> t; while(t--)
	solve();
}
