/*Figure out why the core is being dumped
------ You are levaing out a case when the structure is empty and
is still being reffered to*/

#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

struct sq2{
	multiset <int> s1, s2;
	ll k, sum;
	sq2(int x){
		k = x;
		sum =0LL;
	}

	void balance(){
		while(s2.size()<k && !s1.empty()){
			int temp = *s1.rbegin();
			sum +=temp;
			s2.insert(temp);
			s1.erase(s1.find(temp));
			cout<<"Inserted"<<temp<<endl;
		}
		return;
	}

	void check_k(){
		if(!s2.empty() && s1.empty()){
			while(*s2.begin()< *s1.rbegin()){
				int temp = *s1.rbegin();
				sum += temp;
				s2.insert(temp);
				temp = *s2.begin();
				sum-=temp;
				s2.erase(s2.find(temp));
				s1.insert(temp);
			}
		}
		return;
	}

	void add(int x){
		//sum+=x;
		s1.insert(x);
		balance();
		check_k();
		return;
	}

	void remove(int x){
		if(s1.count(x))
			s1.erase(s1.find(x));
		else if(s2.count(x)){
			s2.erase(s2.find(x));
			balance();
		}
		return;
	}

	void print()
	{
		cout<<sum<<endl;
		return;
	}
};

void solve(){
	int a, b, c, d;
	cin>>a>>b;
	sq2 s(b);
	while(a--){
		cin>>c;
		if(c==1){
			cin>>d;
			s.add(d);
		}
		else if(c==2){
			cin>>d;
			s.remove(d);
		}
		else if(c==3){
			s.print();
		}
	}
	return;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}