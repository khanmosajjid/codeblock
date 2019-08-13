#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[1000],target=0,target1=0,n=0;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the target"<<endl;
	cin>>target;
     sort(a,a+n);
	for(int i=0;i<n-1;i++){
		// cout<<a[i]<<endl;
		int left=i+1;
		int right=n-1;
		target1=target-a[i];
		while(left<right){
			// cout<<"helol"<<endl;
           if(a[i]+a[right]>=target1){
           	right--;
           }
			
			if(a[left]+a[right]==target1){
				// cout<<"hello2"<<endl;
				cout<<a[i]<<" ,"<<a[left]<<" and "<<a[right]<<endl;
				left++;
				right--;
			}
		}
	}
	return 0;

}