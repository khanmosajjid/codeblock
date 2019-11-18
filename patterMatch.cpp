#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,p;
	cin>>s;
	cin>>p;
	int k=0;
	int arr[100];
	for(int i=0;i<s.size();i++){
		int n=i;
		int count=0;
		for(int j=0;j<p.size();j++){
			if(s[n]==p[j]){
            count++;
			}
			else{
				break;
			}
			n++;
		}
		if(count==p.size()){

			arr[k]=i;
			k++;
		}
	}
	cout<<k<<" is the value of k"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
}