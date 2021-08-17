// use structure.rbegin() whenever you want to do stuff
// something goes wrong, not sure what
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

struct ds{
	multiset<int> mset;
	lli sum = 0LL;
	// ds(){
	// 	sum =0;
	// }
	void add(int x){
		mset.insert(x);
		sum+=x;
	}
	void remove(int x){
		if(mset.find != mset.end()){
			sum -= x;
			mset.erase(mset.find(x));
		}
	}
	int max(){
		if(!mset.empty()){
			//auto it = mset.end();
			return *(mset.rbegin()) ;
		}
		else
			return -1;
	}
	int min(){
		if(!mset.empty())
			return *mset.begin();
		else
			return -1;
	}
	int add(){
		return sum;
	}
};

void solve(){
	ds sq1;
	int a, b, c ,d;
	cin>>a;
	for( int i=0; i<a; i++){
		cin>> b;
		if(b==1){
			cin>>c;
			sq1.add(c);
		}
		else if(b==2){
			cin>>c;
			sq1.remove(c);
		}
		else if(b==3){
			char ch;
			cin>>ch;
			cout<<sq1.min()<<endl;
		}
		else if(b==4){
			char ch;
			cin>>ch;
			cout<<sq1.max()<<endl;
		}
		else if(b==5){
			char ch;
			cin>>ch;
			cout<<sq1.add()<<endl;
		}
		else
		{
			assert(1 == 0);
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