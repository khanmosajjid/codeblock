#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int>arr;
   int count=0;
	for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((arr[i]+arr[j])%k==0){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}