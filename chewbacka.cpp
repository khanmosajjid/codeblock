#include<bits/stdc++.h>
using namespace std;

 //chewbacka and number problem from hackerblock

int main(){
	int i,n,k=0;
	vector <int> a;

	cout<<"enter number of testcase"<<endl;
	cin>>n;

	for(int j=0;j<n;j++){
		cout<<"enter the number"<<endl;
		cin>>i;

		while(i!=0){
			int temp=i%10;
			i=i/10;
		        
		        if((9-temp)<temp){
				a.push_back(9-temp);
				}

			else
				a.push_back(temp);

		}     
		    int size=a.size();
	       for(int c=size-1;c>=0;c--){
	       	cout<<a[c];
	       }
	       cout<<""<<endl;

	}
	return 0;
}