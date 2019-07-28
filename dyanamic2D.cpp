#include<bits/stdc++.h>
using namespace std;

//creatinn 2D array using dynamic memory allocation
int main(){
	int m,n,i,j;
	cout<<"enter number or rows and column"<<endl;
	cin>>m>>n;

	int **arr=new int*[3];//crearted primary memory

	for( i=0;i<m;i++){
		arr[i]=new int(n);//created secondary memory
	}
	  int counter=0;
	for( i=0;i<m;i++){
		for( j=0;j<n;j++){
			arr[i][j]=counter++;
		}
	}
	for( i=0;i<m;i++){
		for( j=0;j<n;j++){
			cout<<arr[i][j];
			cout<<" ";
		}
		cout<<""<<endl;
	}
	return 0;
}