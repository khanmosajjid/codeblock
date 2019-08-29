#include<bits/stdc++.h>
using namespace std;

int count(int n){
	int c=0;
	if(n=1||n==2||n==3){
		return 1;//base case
	}
	if(n==4){
		return 2;
	}
	else{
		c++;
		return count(n-1)+count(n-4);
	}
}

int main(){

	int n;
	cin>>n;
	cout<<"no of ways is"<<count(n)<<endl;
}