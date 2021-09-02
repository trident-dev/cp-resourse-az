/*Fuck You, I am not solving this bullshit
Day2 :: I am solving it today (-.-;)/ */

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
ll mod = 1000000007;

inline void add(ll &a, ll b){
	a+=b;
	if(a >= mod) a-=mod;
}

inline void sub(ll &a, ll b){
	a-= b;
	if(a<0) a+=mod;
}

inline ll mul(ll a, ll b){
	return (a * b %mod);
}

inline ll power(ll a, ll b){
	ll res = 1;
	while (b>0){
		if(b%2 == 1){
			res = mul(res,a);
		}
		a = mul(a, a);
		b /= 2;
	}
	return res;
}

inline ll inverse(ll a){
	a %= mod;
	// return power(a, mod-2);
	if(a<0) a+= mod;
	ll b = mod, u=0, v=1;
	while(a){
		ll t = b/a;
		b -= t*a; swap(a,b);
		u -= t*v; swap(u,v);
	}
	assert(b==1);
	if(u<0) u+=mod;
	return u;

}
ll fact[200010];
void calc(){
	fact[0]=1;
	for(int i=1; i<200010; i++)
		fact[i] = mul(fact[i-1], i);
	//cout<<"Factorial inside of 5 "<<fact[5]<<endl;

	return;
}
void solve(){
	ll a, b;
	cin>>a>>b;
	ll res;
	//cout<< "Factorial outside of 5 "<<fact[5]<<endl;
	//cout<< "Factorial a "<<fact[a]<<endl;
	//cout<< "Factorial b "<<fact[b]<<endl;
	ll inv1 =  inverse(fact[a]);
	//cout<<"Inverse 1 "<<inv1<<endl;
	ll inv2 =  inverse(fact[b]);
	//cout<<"Inverse 2 "<<inv2<<endl;
	res = fact[a+b];
	res = mul(res, inv1);
	res = mul(res, inv2);
	cout<<res<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    calc();
    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}