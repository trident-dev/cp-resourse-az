/*The key is to think complete logics
What you end up thinking is true for some but not for all*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
	int a,b=0,c,d;
	cin>>a;
	char arr[a];
	map<char, int> mp;
	mp['L'] = 0; mp['R']=0;
	set< pair<int, int> > st;
	for(int i=0; i<a; i++){
		cin>>arr[a];
		mp[arr[a]]++;
	}
	if(mp['L']==0 && mp['R']==0){
		cout<<"NO"<<endl;
		return;
	}
	pair<int, int> current ={0,0};
	char face = 'N';
	for(int i=0; i<a; i++){
		char ch = arr[i];
		// b++;
		// b%=a;
		if(ch == 'L'){
			if(face == 'N')
				face='W';
			else if(face == 'W')
				face='S';
			else if(face == 'S')
				face='E';
			else if(face == 'E')
				face='N';
		}
		else if(ch == 'R'){
			if(face == 'N')
				face='E';
			else if(face == 'W')
				face='N';
			else if(face == 'S')
				face='W';
			else if(face == 'E')
				face='S';
		}
		else if(ch == 'W'){
			if(face=='N')
				current.second++;
			else if(face =='S')
				current.second--;
			else if(face == 'E')
				current.first++;
			else if(face == 'W')
				current.first--;
		}
		if(current.first == 0 && current.second == 0){
			cout<<"YES"<<endl;
			return;
		}
		else if(st.count(current)){
			cout<<"NO"<<endl;
			return;
		}
		st.insert(current);
	}
	if(face == 'N')
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}