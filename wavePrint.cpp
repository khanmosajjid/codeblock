#include<iostream>
using namespace std;

//to print the element of matrix through column in wave form
// ex-4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// output is-11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
int main() {
    int a[10][10];
    int m,n,i,j;
    cin>>m>>n;
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
       for( j=0;j<n;j++){
        for(i=0;i<m;i++){
            cout<<a[i][j]<<", ";
          }
              
                j=j+1;
                for(i=m-1;i>=0;i--){
                    if(j<n)
                     cout<<a[i][j]<<", ";
            }
            
            
        }
    
    cout<<"END";

	return 0;
}

