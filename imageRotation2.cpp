# include <bits/stdc++.h>
using namespace std;

//rotaton of image in o(1) space i.e. not using any extra array
int main(){
	int i,m,n,k,count=0;
	int p;
	int a[100][100];

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
		for(int j=0;j<i;j++){
			
			p=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=p;
          
         }
	}
	// for(i=0;i<m;i++){
	// 	for(int j=0;j<i;j++){
	// 		int temp=a[i][j];
 //            a[i][j]=a[i][2-j];
 //            a[i][2-j]=temp;

	// 	}
		
	
	cout<<"image after rotation"<<endl;
	for(i=0;i<m;i++){
		for(int j=n-1;j>=0;j--){
            cout<<a[i][j]<<" ";
		}
		cout<<""<<endl;
	}


}  