#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
         sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}