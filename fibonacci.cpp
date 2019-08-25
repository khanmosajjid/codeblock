#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n==0||n==1){
		return n;    //base case for recurssion
	}
     int f1=fib(n-1);   //recursive call
     int f2=fib(n-2);
	return f1+f2;
}

int main(){
	int n,sum=0;
	cin>>n;

	sum=fib(n);
	cout<<fib(n)<<endl;

	return 0;
}