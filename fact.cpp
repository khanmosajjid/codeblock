#include<iostream>
using namespace std;

int factorial(int n){
	int ans=1;
	for(int i=1;i<=n;i++){
	ans = ans*i;
	}
	return ans;
}

int ncr(int n, int r){
	int ans;
	ans=factorial(n)/(factorial(n-r)*factorial(r));
	return ans;
}

int main(){
	cout<<factorial(5)<<endl;
	cout<<ncr(3,2)<<endl;
	return 0;
}