#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a, b, c, d;
	cin>>a;
	char arr[a];
	pair<int,int> curr;
	char face ='N';
	curr.first =0; curr.second =0;
	for(int i=0; i<a; i++){
		cin>>arr[i];
		if(arr[i]=='L')
		{
			if(face == 'N')
				face = 'W';
			else if(face == 'W')
				face = 'S';
			else if(face == 'S')
				face = 'E';
			else if(face == 'E')
				face ='N';
		}
		else if(arr[i] == 'R')
		{
			if(face == 'N')
				face = 'E';
			else if(face == 'E')
				face = 'S';
			else if(face == 'S')
				face = 'W';
			else if(face == 'W')
				face ='N';	
		}
		else if(arr[i] == 'W')
		{
			if(face == 'N')
				curr.second++;
			else if(face == 'S')
				curr.second--;
			else if(face == 'E')
				curr.first++;
			else if(face == 'W')
				curr.first--;
		}
	}
	if(curr.first == 0 && curr.second == 0)
		cout<<"YES"<<endl;
	else if(face == 'N')
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}