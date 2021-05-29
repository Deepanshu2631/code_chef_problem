/*
100,50,10,5,2,1,
total no. of coins  3
total no.of nodes 3

*/




#include<bits/stdc++.h>
using namespace std;
bool comapare(int a,int b){
	return a<=b;
}
int main(){
int coins[]={1,2,5,10,20,50,100,200,500,2000};
int n=sizeof(coins)/sizeof(int);
int money;
cin>>money;
int count=0;
int cntc=0;
while(money>0){

int lb=lower_bound(coins,coins+n,money,comapare)-coins-1;
cout<<coins[lb]<<",";
money=money-coins[lb];
if(coins[lb]==10 ||coins[lb]==20 || coins[lb]==50 || coins[lb]==100 || coins[lb]==200 || coins[lb]==500 || coins[lb]==2000){
count++;
}else{
	cntc++;

}


}
cout<<endl;



cout<<"total no. of coins "<<" "<<cntc<<endl<<"total no.of nodes "<<count<<endl;
count++;
}