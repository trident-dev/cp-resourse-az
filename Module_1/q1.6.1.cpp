#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int lli;
typedef long long ll;
#define mod 1000000007

class Support_q{
    private:
        multiset <int> m1, m2;
        ll sum;
        int k;

    public:
    Support_q(int x) : k(x), sum(0LL) {};

    void add(int x){
        m1.insert(x);
        sum+=x;
        if((int)m1.size()>k)
        {
            int temp = *(m1.begin());
            m2.insert(temp);
            sum-=temp;
            m1.erase(m1.find(temp));
        }
        return;
    }

    void remove(int x){
        if(m2.find(x)!= m2.end()){
            m2.erase(m2.find(x));
        }
        else if(m1.find(x)!=m1.end()){
            m1.erase(m1.find(x));
            sum-=x;
            
            if(m2.empty())
                return;

            int temp = *(m2.rbegin());
            m1.insert(temp);
            sum+=temp;
            m2.erase(m2.find(temp));
        }
        return;
    }
    ll add()
    {
        return sum;
    }
};

void solve(){
    int a, b, c, d;
    cin>>a>>b;

    Support_q sq(b);

    while(a--){
        cin>>c;
        if(c==1){
            cin>>d;
            sq.add(d);
        }
        else if(c==2){
            cin>>d;
            sq.remove(d);
        }
        else if(c==3){
            char ch; cin>>ch;
            cout<<sq.add()<<endl;
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