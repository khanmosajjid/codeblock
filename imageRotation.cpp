#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,m,n,k,count=0;
	int a[100][100],c[100][100];

	cout<<"enter number of rows and column"<<endl;
	cin>>m>>n;

	cout<<"enter elements of row and column"<<endl;

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
	for(i=0;i<m;i++){
		for(int j=0;j<n;j++){
            c[i][j]=a[2-j][i];

		}
		
	}
	cout<<"image after rotation"<<endl;
	for(i=0;i<m;i++){
		for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
		}
		cout<<""<<endl;
	}


}
