#include<bits/stdc++.h>
using namespace std;
//maximum sum of subarray
int main(){
	int a[100],i,n;
	int cs=0;
	int ms=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cs=cs+a[i];
		if(a[i]<0){
			cs=0;
		}
		ms=max(cs,ms);
	}
	cout<<"maximum sum is "<<ms<<endl;
}