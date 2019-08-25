#include <bits/stdc++.h>
using namespace std;

//to check if array is sorted or not using recursion

bool sorted(int n,int *a){
	if(n==1){
		return true; //base case of recursion
	}

	if(a[0]<a[1] && sorted(n-1,a+1)){
		return true;
	}
	return false;


}

int main(){
	int n;
	int a[]={1,7,3,4,5};
	n=5;
    
    if(sorted(n,a))
	cout<<"yes sorted"<<endl;
    else
    	cout<<" not sorted"<<endl;
	return 0;
}
