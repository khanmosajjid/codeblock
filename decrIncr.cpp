#include<bits/stdc++.h>
using namespace std;

void decr(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";
	decr(n-1);
	cout<<n<<" ";
}

int main(){
	int n=5;
	decr(n);
	return 0;
}