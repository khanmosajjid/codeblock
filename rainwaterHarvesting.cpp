#include<bits/stdc++.h>
using namespace std;

// rainwater harvesting problem of hackerblock

int main(){
	vector <int> a,l,r;
	int n,k,count=0;
	cout<<"enter the number  of buildings"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
      cin>>k;
      a.push_back(k);
    }

    int length =a.size()-2;
    cout<<"length is"<<length<<endl;
    for(int j=0;j<length;j++){
    	if(a[j]>a[j+1]){
          count=(a[j]-a[j+1])+count;
          cout<<"count is "<<count<<endl; 
    	}
    }
    cout<<count;
    return 0;
}