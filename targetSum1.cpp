#include<bits/stdc++.h>
using namespace std;

//in 0(n)time complexity

int main(){
	int left,right,a[1000],n,target;

	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>target;
	sort(a,a+n);

	left=0;
	right=n-1;
	while(left<right){
		if(a[left]+a[right]==target){
			cout<<a[left]<<" and "<<a[right]<<endl;
			left++;
		}
		else
		right--;
		
	}
	return 0;
}