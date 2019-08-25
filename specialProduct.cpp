#include<bits/stdc++.h>
using namespace std;

vector<int> findSpeciatProduct(vector<int>arr){
	int s=1;
	int size=arr.size();
	int c[size];
	for(int i=0;i<n;i++){
		s=1;
		for(int j=0;j<n;j++){
			if(i==j){
				j++;
			}
			else{
				s=s*arr[j];
			}
		}
		c[i]=s;
	}
	return c;
}