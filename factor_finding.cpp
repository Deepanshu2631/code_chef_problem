#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	int total =0;
	vector<int>arr;
	for(int i=1; i<=a; i++){
	    
	    if(a%i ==0){
	        arr.push_back(i);
	        total++;
	    }
	}
	cout<<total<<endl;
	
	
	for(auto i=arr.begin(); i!=arr.end(); i++){
	    cout<<*i<<" ";
	}
	
}