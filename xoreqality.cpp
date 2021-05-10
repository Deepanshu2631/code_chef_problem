#include <bits/stdc++.h>
using namespace std;

// Hi!, This is me deepanshu kushwaha and it's my solution sheet for the Given problem.
#define ll long long 

ll int maduloexpo(ll a,ll b,ll m){
    
    ll res =1;
    while(b>0){
        if(b&1){
          res= (res*a)%m;  
        }
        a = (a*a)%m;
        b= b>>1;
    }
    return res;
}
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll m = 1000000007;
	    
	    int ans = maduloexpo(2,n-1,m);
	    
	    cout<<ans<<endl;
	}
	return 0;
    
}