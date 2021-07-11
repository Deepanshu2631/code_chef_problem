#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v;
for (int i = 0; i < 10; ++i)
	{
		int n;
		cin>>n;
		v.push_back(n);
	}

	int x ;
	cin>>x;
	sort(v.begin() , v.end() , greater<int>());
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout<<v[i] <<endl;
	// }
	int ans = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		ans += x/v[i];
		x -= x/v[i]*v[i]; 
	}
	cout<<ans <<endl;


}