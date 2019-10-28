#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int>a,int n,int l,int r){

	if(a[l]==a[r]){
		if(n==0||n==1){
			return true;
		}
		l=l+1;
		r=r-1;
		n=n-2;
		isPalindrome(a,n,l,r);
	}
	else{
		return false;
	}
}

int main(){
	int n,l,r;
	vector<int>a;
	cin>>n;

	while(n--){
		int x;
		cin>>x;
		a.push_back(x);
	}
	l=0;
	r=n-1;
	int y=isPalindrome(a,n,l,r);
	if(y==1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}