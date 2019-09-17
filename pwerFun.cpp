#include<bits/stdc++.h>
using namespace std;

int pow(int a,int b){  //find the power of a power b using recursion
	if(b==0){
		return 1;   //base condition
	}

	return a*pow(a,b-1); //recusive function
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	return 0;
}