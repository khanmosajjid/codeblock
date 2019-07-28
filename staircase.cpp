#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,m,n,k,count=0;
	int a[100][100];

	cout<<"enter number of rows and column"<<endl;
	cin>>m>>n;

	cout<<"enter elements of row and column in ascending order"<<endl;

	for(i=0;i<m;i++){
		for(int j=0;j<n;j++){
            cin>>a[i][j];

		}
		cout<<""<<endl;
	}

	for(i=0;i<m;i++){
		for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
		}
		cout<<""<<endl;
	}

	cout<<"enter the element you want to search"<<endl;
    cin>>k;

     int j=0;
     for(i=0;i<m;i++){
     	
       if(k>a[j][n-1]){
       j++;

      }

      if(k<a[j][n-1]){
    	n--;
    	
      }
 
      if(k==a[j][n-1]){
    	count++;
      }


 }
	if(count!=0)
		 	cout<<"found"<<endl;
           
     else
     	cout<<"not found";


}