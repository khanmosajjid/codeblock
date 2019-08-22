#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n,t,m,k=0,l=0,arr[100][100];
	int total=0,cnt=0;

	cin>>t;
	for(i=0;i<t;i++){
		cin>>m>>n;

		for(int j=0;j<m;j++){
			for(int s=0;s<n;s++){
				cin>>arr[j][s];
			}
		}

		total=m*n;

		while(k<m && l<n){
           if(cnt==total){
           	break;
           }

           for(int j=k;j<m;j++){
           	cout<<arr[j][l]<<", ";
           	cnt++;
           }
           l++;
           for(int j=l;j<n;j++){
           	cout<<arr[m-1][j]<<", ";
           	cnt++;
           }
           m--;

           if(k<m){

           	   for(int j=m-1;j>=k;j--){
           	   	cout<<arr[j][n-1]<<", ";
           	   	cnt++;
           	   }
           	   n--;
           }

           if(l<n){

           	for(int j=n-1;j>=k;j--){
           		cout<<arr[k][j]<<", ";

           		cnt++;
           	}
           	k++;
           }


		}
	}
	return 0;



}