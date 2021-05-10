/*For a given N, find the number of ways to choose an integer x from the range [0,2N−1] such that x⊕(x+1)=(x+2)⊕(x+3), where ⊕ denotes the bitwise XOR operator.

Since the number of valid x can be large, output it modulo 109+7.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The only line of each test case contains a single integer N.
Output
For each test case, output in a single line the answer to the problem modulo 109+7.

Constraints
1≤T≤105
1≤N≤105
Subtasks
Subtask #1 (100 points): Original Constraints

Sample Input
2
1
2
Sample Output
1
2
Explanation
Test Case 1: The possible values of x are {0}.

Test Case 2: The possible values of x are {0,2}


*/
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
