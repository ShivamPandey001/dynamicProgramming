//Fibonacci Program Using DP...

#include<iostream>
using namespace std;

int fib(int n,int dp[]){

	if(n==0 or n==1)
		return n;
  //lookup
	if(dp[n]!=0)
		return dp[n];
	
	return dp[n]=(fib(n-1)+fib(n-2));
}

int main(){
	int n;
	cin>>n;
	
	int dp[100]={0};
	cout<<fib(n,dp)<<endl;
	
	return 0;
}
