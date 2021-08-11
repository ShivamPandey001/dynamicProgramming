//Fibonacci Using Recursion

int fib(int n){
	if(n==0 or n==1)
		return n;
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	cin>>n;
	
	cout<<fib(n)<<endl;
	return 0;
}

//Fibonacci Using DP Top Down approach..


#include<iostream>
using namespace std;

int fib(int n,int dp[]){

	if(n==0 or n==1)
		return n;
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

//bottom Up
//Time complexity O(N)
//Space Complexity O(N)

int fibBU(int n){
	if(n==0 or n===1)return n;
	int dp[100];
	for(int i=0;i<n;i++)
		dp[i]=dp[i-1]+dp[i-2];
	return dp[n];
}

int main(){
	int n;
	cin>>n;
	
	cout<<fibBU(n)<<endl;
	
	return 0;
}

//bottom up with space optmisation.. O(1)

int fibSpaceOpt(int n){
	if(n==0 or n==1)
		return n;
	int a=0;
	int b=1;
	int c;
	
	for(int i=2;i<=n;i++){
		c=a+b;
		c=b
		dp[i]=dp[i-1]+dp[i-2];
	return c;
}
int main(){
	int n;
	cin>>n;
	
	cout<<fibSpaceOpt(n)<<endl;
	
	return 0;
}
