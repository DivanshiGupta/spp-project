#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<functional>
using namespace std;
#define ll long long int
#define ld long double
using namespace __gnu_pbds;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,
tree_order_statistics_node_update> in_set;
#define rep(n) for(ll i=0;i<(n);i++)
#define jrep(n) for(ll j=0;j<(n);j++)
#define all(a) (a).begin(), (a).end()
#define dpp(a) cout<<(a).first<<" "<<(a).second<<endl;
#define append push_back
#define mod 1000000007
#define ff first
#define ss second
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fast ios::sync_with_stdio(0);
ll pw(ll x,ll y,ll p=mod){ll r=1; x=x%p;while(y>0){ if(y&1)r=(r*x)%p;
y=y>>1;x=(x*x)%p;} return r; } vector<ll> uniq(vector<ll> arr)
{vector<ll>brr;sort(all(arr));brr.append(arr[0]);
for(auto i:arr)if(brr.back()!=i)brr.append(i);return brr;}

ll arr[1000006];
void addf(int index){
}

void delf(int index){
}

int query(int index){ index++; int su=0;
    rep(index) su+=arr[i]; return su;
}

int gi(int index){
    rep(10000) if(query(i)>=index) return i; return -1;
}

void solve(){
   rep(10000){
        //rep(10) cout<<arr[i]<<" "; cout<<endl;
        int type; cin>>type;
        if(type==0){
            int a; cin>>a;
            arr[a]--; delf(a);
        } else if(type==1) {
            int a; cin>>a;
            arr[a]++; addf(a);
        } else {
            int a; cin>>a;
            cout<<gi(a)<<endl;
        }
    }    
}
 
int main(){
    ffast
    ll t=1;
    //cin>>t;
    rep(t) solve();
}
 
 
// *p.find_by_order(n) : nth value (0 indexed)
// p.order_of_key(7): index of 7 (0 indexed)