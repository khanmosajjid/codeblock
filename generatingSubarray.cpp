#include<iostream>
using namespace std;

int main(){
	int n,i,a[50],sum=0,max=0,curSum[100];

	cin>>n;
	cin>>a[0];
     curSum[0]=a[0];
	  for(i=1;i<n;i++){
		cin>>a[i];
		curSum[i]=curSum[i-1]+a[i];
	   }

   cout<<"subarray is"<<endl;
	for(i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum=0;
			sum=curSum[j]-curSum[i-1];

			    if(sum>max){
                	max= sum;
                }
                
			
		}
	}
	cout<<"maximus sum is "<<max;   
 return 0;

}