#include<bits/stdc++.h>
using namespace std;

int main(){
	char c[100][100];
	int n,m,k,s;

	cin>>n>>m>>k>>s;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c[i][j];
		}
	}
       int i=0,j=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(c[i][j]=='*'){
				s=s+5;
			}
			if(c[i][j]=='.'){
				s=s-2;
			}
			if(c[i][j]!='#'){
				s=s-1;
			}
			if(s<k){
				cout<<"NO"<<endl;
				return 0;
			}
			if(c[i][j]=='#'){
				break;
			}
		}
		if(c[i][j]!='#'){
			s=s+1;
		}
		
	}
	cout<<"YES"<<endl;
	cout<<s;
	return 0;
}