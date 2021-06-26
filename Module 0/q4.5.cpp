#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, p;
	cin>>n>>m>>p;
	int n1[n][m], n2[m][p], n3[n][p];
	for(int i =0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>n1[i][j];
		}
	}
	for(int i =0; i<m; i++){
		for(int j=0; j<p; j++){
			cin>>n2[i][j];
		}
	}

	memset(n3, 0, sizeof(n3));

	// for( int i =0; i<n; i++){
	// 	for(int j =0; j<p; j++){
	// 		cout<<n3[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	for(int i =0; i<n; i++){
		for(int j =0; j<p; j++){
			for(int k=0; k<m; k++){
				n3[i][j]+=n1[i][k]*n2[k][j];
			}
		}
	}

	for( int i =0; i<n; i++){
		for(int j =0; j<p; j++){
			cout<<n3[i][j]<<" ";
		}
		cout<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin>> t; while(t--)
	solve();
}
