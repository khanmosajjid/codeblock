#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int t,n,a[1000],b[100];
 	cin>>t;
 	for(int i=0;i<t;i++){
 		cin>>n;
 		int l=0;
 		int g=0;
 		for(int j=0;j<n;j++){
 			cin>>a[j];
 		}
 		for(int k=0;k<n;k++){
 			if(a[k]==(k+1)%n||a[k]==k+1){
 				b[l]=1;
 				l++;
 				
 				
 			}
 			else if(a[k]==1&&a[k+1]==n){
 				b[l]=1;
 				l++;
  			}
 			else{
 				b[l]=0;
 			l++;
 			}
 		}
 		for(int s=0;s<l;s++){
 			if(b[s]!=1){
 				g=1;;
 			}
 		}
 		if(g==1){
 			cout<<"NO"<<endl;
      }
      else
      	cout<<"YES"<<endl;
 	}
         
     return 0;
 }