#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

void solve(){
    int a, b, c, d;
    cin>>a>>b;
    // int arr1[a], arr2[b];
    multiset <int>  st1, st2;
    for( int i=0; i<a; i++){
        cin>>c>>d;
        st1.insert(c*d);
    }
    //cout<<"Out Here!!"<<endl;
    int count =0;
    for(int i=0; i<b; i++){
        cin>>c>>d;
        int e = c*d;
        if(st1.count(e)){
            count++;
            st1.erase(st1.find(e));
        }
    }
    cout<<count<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>> t; //string d; getline(cin, d); 
    while(t--) solve();
}